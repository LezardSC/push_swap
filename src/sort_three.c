/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:27:44 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/13 15:28:55 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_ps **a)
{
	if ((*a)->content > (*a)->next->content)
		ft_sa(a);
	if ((*a)->next->content > (*a)->next->next->content)
		ft_rra(a);
	if ((*a)->content > (*a)->next->content)
		ft_sa(a);
}
