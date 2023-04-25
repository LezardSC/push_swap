/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:24:16 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/25 17:48:51 by jrenault         ###   ########lyon.fr   */
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
			return (1);
		i++;
	}
	return (0);
}

static int	check_only_numbers(char **numbers)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (numbers[i])
	{
		while (numbers[i][j])
		{
			if ((numbers[i][j] > '9' || numbers[i][j] < '0') && numbers[i][0] != '-')
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

static int	check_int(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
	{
		if (ft_atoi_push_swap(numbers[i]) > INT_MAX
			|| ft_atoi_push_swap(numbers[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

static int	check_duplicates(char **numbers)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (j != i && numbers[i])
	{
		while (j != i && numbers[j])
		{
			if (ft_atoi(numbers[i]) == ft_atoi(numbers[j]))
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int	check_error(char **numbers)
{
	if (check_only_numbers(numbers) == 1)
		return (1);
	if (check_int(numbers) == 1)
		return (1);
	if (check_duplicates(numbers) == 1)
		return (1);
	return (0);
}
