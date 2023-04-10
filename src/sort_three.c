/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:27:44 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/10 16:10:24 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_ps **a)
{
	ft_printf("before: %d\n", (*a)->content);
	ft_printf("before: %d\n", (*a)->next->content);
	ft_printf("before: %d\n", (*a)->next->next->content);
	if ((*a)->content > (*a)->next->content)
		ft_sa(a);
	ft_printf("op 1: %d\n", (*a)->content);
	ft_printf("op 1: %d\n", (*a)->next->content);
	ft_printf("op 1: %d\n", (*a)->next->next->content);
	if ((*a)->next->content > (*a)->next->next->content)
		ft_rra(a);
	ft_printf("op 2: %d\n", (*a)->content);
	ft_printf("op 2: %d\n", (*a)->next->content);
	ft_printf("op 2: %d\n", (*a)->next->next->content);
	if ((*a)->content > (*a)->next->content)
		ft_sa(a);
	ft_printf("op 3: %d\n", (*a)->content);
	ft_printf("op 3: %d\n", (*a)->next->content);
	ft_printf("op 3: %d\n", (*a)->next->next->content);
}
