/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:19:04 by jrenault          #+#    #+#             */
/*   Updated: 2023/03/29 09:58:07 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	*a;
	t_ps	*b;
	int		nb_arg;
	int		content;

	if (argc < 2)
		return (0);
	if (check_error(argv) == 1)
	{
		ft_printf("Error\n");
		return (0);
	}
	a = NULL;
	b = NULL;
	nb_arg = argc - 1;
	while (--argc > 0)
	{
		content = atoi(argv[argc]);
		ft_stack(&a, content);
	}
	nb_to_index(&a);
	which_sort(nb_arg, &a, &b);
	while (a)
	{
		ft_printf("a: %d\n", a->content);
		a = a->next;
	}
	ft_printf("\n");
	(void)b;
	// while (b)
	// {
	// 	ft_printf("b: %d\n", b->content);
	// 	b = b->next;
	// }
	return (0);
}
