/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:24:16 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/21 16:33:33 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_error_before_split(char *numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
	{
		if (numbers[i] != ' ' && (numbers[i] <= '0' && numbers[i] >= '9'))
			return (free(numbers), 1);
		i++;
	}
	free(numbers);
	return (0);
}

static int	check_only_numbers(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if ((argv[i][j] > '9' || argv[i][j] < '0') && argv[i][0] != '-')
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

static int	check_int(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_atoi_push_swap(argv[i]) > INT_MAX)
			return (1);
		i++;
	}
	return (0);
}

static int	check_duplicates(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = i + 1;
	while (j != i && argv[i])
	{
		while (j != i && argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int	check_error(char **argv)
{
	if (check_only_numbers(argv) == 1)
		return (1);
	if (check_int(argv) == 1)
		return (1);
	if (check_duplicates(argv) == 1)
		return (1);
	return (0);
}
