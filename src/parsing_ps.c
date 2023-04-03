/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 17:06:12 by lezard            #+#    #+#             */
/*   Updated: 2023/04/03 11:37:19 by lezard           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_error_before_split(char *numbers)
{
	int	i;

	i = 0;
	if (numbers[0] >= '0' && numbers[0] <= '9')
		return (1);
	while (numbers[i])
	{
		if (numbers[i] != ' ' || (numbers[i] >= '0' || numbers[i] <= '0'))
			return (1);
		i++;
	}
	if (numbers[i] == ' ')
		return (1);
	return (0);
}

static int	split_argv(t_ps **a, char **argv)
{
	char	**numbers;
	int		content;
	int		i;

	numbers = ft_split(argv[1], ' ');
	i = ft_strlen(numbers);
	while (--i > 0)
	{
		content = ft_atoi(numbers[i]);
		ft_stack(a, content);
	}
	return (0);
}

int	parsing_ps(t_ps **a, int argc, char **argv)
{
	int	content;

	if (argc == 2)
	{
		if (argv[1][0] >= '0' && argv[1][0] <= '9' && argv[1][1] == '\0')
			return (0);
		else if (check_error_before_split(argv[1]) == 0)
			split_argv(a, argv);
		else
			return (ft_printf("Error\n"), 1);
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
