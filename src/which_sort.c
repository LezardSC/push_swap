/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:46:24 by jrenault          #+#    #+#             */
/*   Updated: 2023/03/29 09:58:32 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	which_sort(int nb_arg, t_ps **a, t_ps **b)
{
	if (nb_arg == 1)
		return (0);
	else if (nb_arg == 2)
	{
		ft_sa(a);
		return (0);
	}
	else if (nb_arg == 3)
		sort_three(a, b);
	else if (nb_arg == 4)
		sort_four(a, b);
	else
		ft_radix(a, b);
	return (0);
}
