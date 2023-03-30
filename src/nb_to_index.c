/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_to_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 07:39:32 by jrenault          #+#    #+#             */
/*   Updated: 2023/03/30 11:35:20 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	change_into_index(t_ps **a, int	*array, int array_size)
{
	int		i;
	int		found;
	t_ps	*tmp;

	tmp = *a;
	while (tmp != NULL)
	{
		i = 0;
		found = 0;
		while (i < array_size && found == 0)
		{
			if (tmp->content == array[i])
			{
				tmp->content = i;
				found = 1;
			}
			i++;
		}
		tmp = tmp->next;
	}
}

static int	*ft_linked_list_to_array(t_ps *lst_index, int size)
{
	t_ps	*tmp;
	int		*array;
	int		i;

	tmp = lst_index;
	array = malloc(sizeof(int) * size);
	i = 0;
	while (tmp != NULL)
	{
		array[i] = tmp->content;
		tmp = tmp->next;
		i++;
	}
	return (array);
}

static t_ps	*copy_list(t_ps *lst)
{
	t_ps	*new_list;

	if (!lst)
		return (NULL);
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
	int		*index_lst;
	int		size_array;

	if (!a || !(*a))
		return ;
	size_array = ft_lstsize_ps(*a);
	index_lst = malloc(sizeof(int) * size_array + 1);
	sorted_list = copy_list(*a);
	bubble_swap(&sorted_list);
	index_lst = ft_linked_list_to_array(sorted_list, size_array);
	change_into_index(a, index_lst, size_array);
	free(index_lst);
}
