/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:25:04 by jrenault          #+#    #+#             */
/*   Updated: 2023/02/26 16:35:31 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate(t_ps **lst)
{
	t_ps	*first_to_last;
	t_ps	*tmp;

	if (!lst || !(*lst)->next)
		return ;
	first_to_last = *lst;
	*lst = (*lst)->next;
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first_to_last;
	first_to_last->next = NULL;
}

void	ft_ra(t_ps **a)
{
	ft_rotate(a);
	ft_printf("ra\n");
}

void	ft_rb(t_ps **b)
{
	ft_rotate(b);
	ft_printf("rb\n");
}

void	ft_rr(t_ps **a, t_ps **b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_printf("rr\n");
}
