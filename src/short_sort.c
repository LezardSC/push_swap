/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:44:35 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/02 16:58:04 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min(t_ps *a)
{
	t_ps	*tmp;
	int		min;

	tmp = a;
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}

static int	is_already_sorted(t_ps *a)
{
	t_ps	*tmp;

	tmp = a;
	while (tmp)
	{
		if (tmp->next == NULL)
			break ;
		if (tmp->content < tmp->next->content)
			tmp = tmp->next;
		else
			return (1);
	}
	return (0);
}

void	short_sort(t_ps **a, t_ps **b, int nb_arg)
{
	int		min;
	int		i;

	i = 0;
	if (is_already_sorted(*a) == 0)
		return ;
	while (i < (nb_arg - 1))
	{
		min = find_min(*a);
		while ((*a)->content != min)
			ft_ra(a);
		ft_pb(a, b);
		i++;
	}
	while (i > 0)
	{
		ft_pa(a, b);
		i--;
	}
}
