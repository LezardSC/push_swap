/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:46:00 by jrenault          #+#    #+#             */
/*   Updated: 2023/03/01 18:19:06 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front_ps(t_ps **lst, t_ps *new)
{
	new->next = *lst;
	*lst = new;
}

void	ft_lstadd_back_ps(t_ps **lst, t_ps *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast_ps(*lst)->next = new;
}

t_ps	*ft_lstlast_ps(t_ps *lst)
{
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstdelone_ps(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || *del == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
}
