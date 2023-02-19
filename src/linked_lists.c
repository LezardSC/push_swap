/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:19:02 by jrenault          #+#    #+#             */
/*   Updated: 2023/02/19 16:11:46 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define MALLOC_FAIL -5
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

typedef struct s_p_list
{
	int				value;
	struct s_p_list	*next;
}			t_push_swap;

int	createlist(t_push_swap **lst, int value)
{
	(*lst) = malloc (sizeof(t_push_swap));
	if (!(*lst))
		return (MALLOC_FAIL);
	(*lst)->next = NULL;
	(*lst)->value = value;
	return (EXIT_SUCCESS);
}

int	addtolist(t_push_swap **lst, int value)
{
	t_push_swap	*tmp;

	tmp = *lst;
	while ((*lst)->next)
		(*lst) = (*lst)->next;
	(*lst)->next = tmp;
	tmp = malloc (sizeof(t_push_swap));
	if (!tmp)
		return (MALLOC_FAIL);
	tmp->value = value;
	tmp->next = NULL;
	return (EXIT_SUCCESS);
}

void	printlist(t_push_swap **lst)
{
	t_push_swap	*tmp;

	tmp = *lst;
	while (tmp->next)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	printf("%d\n", tmp->value);
}

int	main(void)
{
	t_push_swap	*list;

	if (createlist(&list, 5))
		return (EXIT_FAILURE);
	if (addtolist(&list, 10))
		return (EXIT_FAILURE);
	printlist(&list);
	return (0);
}
