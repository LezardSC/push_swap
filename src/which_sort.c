/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:46:24 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/13 16:41:13 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	which_sort(int nb_arg, t_ps **a, t_ps **b)
{
	if (nb_arg == 1)
		return (0);
	else if (nb_arg == 2)
	{
		if ((*a)->content > (*a)->next->content)
			ft_sa(a);
		return (0);
	}
	else if (nb_arg == 3)
		sort_three(a);
	else if (nb_arg == 4)
		sort_four(a, b, nb_arg);
	else if (nb_arg == 5)
		sort_five(a, b, nb_arg);
	else
		ft_radix(a, b);
	return (0);
}
