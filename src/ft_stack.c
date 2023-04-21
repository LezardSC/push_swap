/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:03:20 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/21 16:49:06 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack(t_ps **lst, int content)
{
	t_ps	*tmp;

	tmp = malloc(sizeof(t_ps));
	if (!tmp)
		return ;
	tmp->content = content;
	ft_lstadd_front_ps(lst, tmp);
}
