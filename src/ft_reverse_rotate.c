/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:48:54 by jrenault          #+#    #+#             */
/*   Updated: 2023/02/26 16:58:45 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_reverse_rotate(t_ps **lst)
{
	t_ps	*last_to_first;
	t_ps	*tmp;

	if (!lst || !(*lst)->next)
		return ;
	last_to_first = *lst;
	while (last_to_first->next)
		last_to_first = last_to_first->next;
	tmp = *lst;
	*lst = (*lst)->next;
	last_to_first->next = tmp;
	tmp->next = NULL;
}

void	ft_rra(t_ps **a)
{
	ft_reverse_rotate(a);
	ft_printf("rra\n");
}

void	ft_rrb(t_ps **a)
{
	ft_reverse_rotate(a);
	ft_printf("rrb\n");
}

void	ft_rrr(t_ps **a, t_ps **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	ft_printf("rrr\n");
}
