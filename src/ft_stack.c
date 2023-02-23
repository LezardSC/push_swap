/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:03:20 by jrenault          #+#    #+#             */
/*   Updated: 2023/02/23 14:16:07 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack(t_ps **lst, int content)
{
	t_ps	*tmp;

	tmp = malloc(sizeof(t_ps));
	if (!tmp)
		exit(0);
	tmp->content = content;
	ft_lstadd_front(lst, tmp);
}
