/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:50:37 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/14 17:36:15 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	binary_size(int number)
{
	int	i;

	i = 0;
	while (number != 0)
	{
		number = number / 2;
		i++;
	}
	return (i);
}

void	ft_radix(t_ps **a, t_ps **b)
{
	int	size;

	size = ft_lstsize_ps(a);
	(void)b;
}
