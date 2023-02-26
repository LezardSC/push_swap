/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:35:03 by jrenault          #+#    #+#             */
/*   Updated: 2023/02/26 13:24:26 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_ps **lst1, t_ps **lst2)
{
	t_ps	*tmp;

	if (!lst1 || !(*lst1))
		return ;
	tmp = *lst1;
	*lst1 = (*lst1)->next;
	tmp->next = *lst2;
	*lst2 = tmp;
}

void	ft_pa(t_ps **a, t_ps **b)
{
	ft_push(a, b);
	ft_printf("pa\n");
}

void	ft_pb(t_ps **a, t_ps **b)
{
	ft_push(b, a);
	ft_printf("pb\n");
}
