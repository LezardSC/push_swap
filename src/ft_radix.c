/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:50:37 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/18 18:08:55 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bit(t_ps **a)
{
	t_ps	*tmp;
	int		max;
	int		max_bit;

	tmp = *a;
	max = tmp->content;
	max_bit = 0;
	while (tmp)
	{
		if (tmp->content > max)
			max = tmp->content;
		tmp = tmp->next;
	}
	while ((max >> max_bit) != 0)
	{
		max_bit++;
	}
	return (max_bit);
}

void	ft_radix(t_ps **a, t_ps **b)
{
	int		size;
	int		max_bit;
	int		i;
	int		j;

	size = ft_lstsize_ps(*a);
	max_bit = get_max_bit(a);
	i = 0;
	while (i < max_bit)
	{
		j = 0;
		while (j < size)
		{
			if ((((*a)->content >> i) & 1) == 1)
				ft_ra(a);
			else
				ft_pb(a, b);
			j++;
		}
		while (ft_lstsize_ps(*b) != 0)
			ft_pa(a, b);
		i++;
	}
}
