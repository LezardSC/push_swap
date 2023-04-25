/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:44:35 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/25 14:16:12 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min_and_index(t_ps *a, int button)
{
	t_ps	*tmp;
	int		min;
	int		i;
	int		min_index;

	tmp = a;
	min = tmp->content;
	i = 0;
	min_index = 0;
	while (tmp)
	{
		if (tmp->content < min)
		{
			min = tmp->content;
			min_index = i;
		}
		tmp = tmp->next;
		i++;
	}
	if (button == 0)
		return (min);
	else
		return (min_index);
}

void	sort_five(t_ps **a, t_ps **b, int nb_arg)
{
	int		min_index;
	int		min;
	int		i;

	i = 0;
	while (i < 2)
	{
		min = find_min_and_index(*a, 0);
		min_index = find_min_and_index(*a, 1);
		while ((*a)->content != min)
		{
			if (min_index > (nb_arg / 2))
				ft_rra(a);
			else
				ft_ra(a);
		}
		ft_pb(a, b);
		i++;
	}
	sort_three(a);
	ft_pa(a, b);
	ft_pa(a, b);
}
