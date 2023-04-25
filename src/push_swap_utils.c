/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   push_swap_utils.c								  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: jrenault <jrenault@student.42lyon.fr>	  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/02/25 14:46:00 by jrenault		  #+#	#+#			 */
/*   Updated: 2023/04/21 16:26:55 by jrenault		 ###   ########lyon.fr   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi_push_swap(char *str)
{
	int		i;
	long	nb;
	int		sign;

	i = 0;
	nb = 0;
	sign = 1;
	if ((str[i] == '+' || str[i] == '-')
		&& (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nb != ((nb * 10) + (str[i] - '0')) / 10)
		{
			ft_printf("Error\n");
			return (0);
		}
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

void	ft_lstadd_front_ps(t_ps **lst, t_ps *new)
{
	new->next = *lst;
	*lst = new;
}

int	ft_lstsize_ps(t_ps *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_lstclear_ps(t_ps *lst)
{
	t_ps	*tmp;
	t_ps	*next;

	if (lst == NULL)
		return ;
	tmp = lst;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	lst = NULL;
}
