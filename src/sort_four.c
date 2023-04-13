/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:39:39 by lezard            #+#    #+#             */
/*   Updated: 2023/04/13 16:42:28 by lezard           ###   ########lyon.fr   */
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

void	sort_four(t_ps **a, t_ps **b, int nb_arg)
{
	int		min_index;
	int		min;
	int		i;

	i = 0;
	if (is_already_sorted(*a) == 0)
		return ;
	while (i < 1)
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
}
