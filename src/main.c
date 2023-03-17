/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:19:04 by jrenault          #+#    #+#             */
/*   Updated: 2023/03/17 14:52:51 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	*a;
	t_ps	*b;
//	int		i;
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
//	i = argc;
	while (--argc > 0)
	{
		content = atoi(argv[argc]);
		ft_stack(&a, content);
	}
	// while (--i > 0)
	// {
	// 	content = 9;
	// 	ft_stack(&b, content);
	// }
	nb_to_index(&a);
	while (a)
	{
		ft_printf("a: %d\n", a->content);
		a = a->next;
	}
	(void)b;
	// while (b)
	// {
	// 	ft_printf("b: %d\n", b->content);
	// 	b = b->next;
	// }
	return (0);
}
