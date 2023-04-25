/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 17:06:12 by lezard            #+#    #+#             */
/*   Updated: 2023/04/25 17:39:25 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	split_argv(t_ps **a, char **argv)
{
	char	**numbers;
	int		content;
	int		i;

	numbers = ft_split(argv[1], ' ');
	if (check_error(numbers) == 1)
	{
		ft_printf("Error\n");
		free_tab(numbers);
		return (1);
	}
	i = ft_strlen_doublechar(numbers);
	while (--i >= 0)
	{
		content = atoi(numbers[i]);
		ft_stack(a, content);
	}
	free_tab(numbers);
	return (0);
}

static int	is_single_number(char *number)
{
	size_t	i;

	i = 0;
	if (number[0] == '-')
		i++;
	while (number[i] >= '0' && number[i] <= '9')
		i++;
	if (i == ft_strlen(number))
		return (1);
	return (0);
}

int	parsing_ps(t_ps **a, int argc, char **argv)
{
	int	content;

	if (argc == 2)
	{
		if (is_single_number(argv[1]) == 1)
			return (0);
		else if (check_error_before_split(argv[1]) == 0)
			split_argv(a, argv);
		else
			return (ft_printf("Error\n"), 1);
	}
	if (argc > 2)
	{
		if (check_error(argv + 1) == 1)
		{
			ft_printf("Error\n");
			return (0);
		}
		while (--argc > 0)
		{
			content = atoi(argv[argc]);
			ft_stack(a, content);
		}
	}
	return (0);
}
