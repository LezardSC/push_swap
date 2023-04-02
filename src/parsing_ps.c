/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 17:06:12 by lezard            #+#    #+#             */
/*   Updated: 2023/04/02 17:18:08 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parsing_ps(t_ps **a, int argc, char **argv)
{
	int	content;

	if (argc == 2)
	{
		ft_printf("ok");
	}
	if (argc > 2)
	{
		while (--argc > 0)
		{
			content = atoi(argv[argc]);
			ft_stack(a, content);
		}
	}
	return (0);
}
