/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_to_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 07:39:32 by jrenault          #+#    #+#             */
/*   Updated: 2023/03/01 18:54:38 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

	/*
	si b != NULL
	on met le content de a dans b.
	ensuite si content a > content b
	content a se met derrière content b
	sinon si content a < content b
	content a se met devant content b

	on défile à chaque fois en repartant du début, comme ça on trie direct.
	C'est simple en fait. On revient toujours au début de la liste et si
	c'est inférieur on avance d'un cran et on compare à nouveau.
	*/

void	bubble_swap(t_ps *head)
{
	t_ps	*lst1;
	t_ps	*lst2;
	int		switched;

	if (head == NULL || head->next == NULL)
		return ;
	switched = 1;
	lst2 = NULL;
	//On utilise switched comme un bouton pour être sûr
	//que la liste est parcourue au moins une fois même
	//si elle est déjà triée.
	while (switched)
	{
		switched = 0;
		lst1 = head;
		while (lst1->next != lst2)
		{
			if (lst1->content > lst1->next->content)
			{
				ft_swap(lst1->content, lst1->next->content);
				switched = 1;
			}
			lst1 = lst1->next;
		}
			lst2 = lst1;
	}
	

}

void	nb_to_index(t_ps **a, t_ps **b)
{
	t_ps	tmp;

	if (!a || !(*a))
		return ;
	ft_push(b, a);
}
