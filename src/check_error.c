/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:24:16 by jrenault          #+#    #+#             */
/*   Updated: 2023/02/25 14:58:19 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_atoi_push_swap(char *str)
{
	int		i;
	long	nb;
	int		sign;

	i = 0;
	nb = 0;
	sign = 1;
	if ((str[i] == '+' || str[i] == '-')
		&& (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nb != ((nb * 10) + (str[i] - '0')) / 10)
		{
			ft_printf("Error\n");
			exit(0);
		}
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
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
