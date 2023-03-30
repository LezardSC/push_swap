/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:39:16 by jrenault          #+#    #+#             */
/*   Updated: 2023/03/29 14:06:07 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_ps **a)
{
	t_ps	*lst1;
	t_ps	*lst2;
	int		switched;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	switched = 1;
	lst2 = NULL;
	while (switched)
	{
		switched = 0;
		lst1 = *a;
		while (lst1->next != lst2)
		{
			if (lst1->content > lst1->next->content)
			{
				ft_sa(a);
				switched = 1;
			}
			lst1 = lst1->next;
		}
			lst2 = lst1;
	}
}
