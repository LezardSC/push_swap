/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:16:19 by jrenault          #+#    #+#             */
/*   Updated: 2023/02/26 11:34:34 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_ps **lst)
{
	int	tmp;

	if (*lst == NULL || (*lst)->next == NULL)
		return ;
	tmp = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = tmp;
}

void	ft_sa(t_ps **a)
{
	ft_swap(a);
	ft_printf("sa\n");
}

void	ft_sb(t_ps **b)
{
	ft_swap(b);
	ft_printf("sb\n");
}

void	ft_ss(t_ps **a, t_ps **b)
{
	ft_swap(a);
	ft_swap(b);
	ft_printf("ss\n");
}
