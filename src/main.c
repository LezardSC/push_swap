/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:19:04 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/25 14:56:30 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_number_arg(t_ps *a)
{
	int		i;
	t_ps	*tmp;

	i = 0;
	tmp = a;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	t_ps	*a;
	t_ps	*b;
	int		nb_arg;

	if (argc < 2)
		return (0);
	a = NULL;
	b = NULL;
	parsing_ps(&a, argc, argv);
	nb_to_index(&a);
	nb_arg = check_number_arg(a);
	which_sort(nb_arg, &a, &b);
	ft_lstclear_ps(a);
	return (0);
}
