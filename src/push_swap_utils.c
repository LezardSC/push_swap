/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:46:00 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/02 17:00:26 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_push_swap(char *str)
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
			exit(0);
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

void	ft_lstadd_back_ps(t_ps **lst, t_ps *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast_ps(*lst)->next = new;
}

t_ps	*ft_lstlast_ps(t_ps *lst)
{
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstdelone_ps(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || *del == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
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
