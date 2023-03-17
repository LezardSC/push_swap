/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_to_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 07:39:32 by jrenault          #+#    #+#             */
/*   Updated: 2023/03/17 16:21:31 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_ps	*copy_list(t_ps *lst)
{
	t_ps	*new_list;

	if (!lst)
		return ;
	new_list = malloc(sizeof(t_ps));
	new_list->content = lst->content;
	new_list->next = copy_list(lst->next);
	return (new_list);
}

static void	bubble_swap(t_ps **head)
{
	t_ps	*lst1;
	t_ps	*lst2;
	int		switched;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	switched = 1;
	lst2 = NULL;
	while (switched)
	{
		switched = 0;
		lst1 = *head;
		while (lst1->next != lst2)
		{
			if (lst1->content > lst1->next->content)
			{
				ft_swap_int(&lst1->content, &lst1->next->content);
				switched = 1;
			}
			lst1 = lst1->next;
		}
			lst2 = lst1;
	}
}

void	nb_to_index(t_ps **a)
{
	t_ps	*sorted_list;

	if (!a || !(*a))
		return ;
	sorted_list = copy_list(a);
	bubble_swap(sorted_list);
	change_into_index(a, sorted_list);
}
