/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:48:54 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/13 15:27:16 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_reverse_rotate(t_ps **lst)
{
	t_ps	*last_to_first;
	t_ps	*tmp;

	if (!lst || !(*lst)->next)
		return ;
	tmp = *lst;
	while (tmp->next && tmp->next->next)
		tmp = tmp->next;
	last_to_first = tmp->next;
	tmp->next = NULL;
	last_to_first->next = *lst;
	*lst = last_to_first;
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
