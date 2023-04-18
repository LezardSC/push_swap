/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:19:04 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/18 18:10:33 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	*a;
	t_ps	*b;
	int		nb_arg;

	if (argc < 2)
		return (0);
	a = NULL;
	b = NULL;
	nb_arg = argc - 1;
	parsing_ps(&a, argc, argv);
	nb_to_index(&a);
	which_sort(nb_arg, &a, &b);
	while (a)
	{
		ft_printf("a: %d\n", a->content);
		a = a->next;
	}
	return (0);
}
