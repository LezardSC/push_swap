/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:19:04 by jrenault          #+#    #+#             */
/*   Updated: 2023/02/23 14:03:05 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	*a;
	t_ps	*b;
	int		i;
	int		content;

	if (argc < 2)
		return (0);
	i = 1;
	if (check_error(argv) == 1)
	{
		ft_printf("Error\n");
		return (0);
	}
	a = NULL;
	b = NULL;
	while (i <= argc)
	{
		content = ft_atoi(argv[i]);
		ft_stack(a, content);
		i++;
	}
	while (a)
	{
		content = ft_push(a);
	}
	b = ft_stack(b, content);
	return (0);
}
