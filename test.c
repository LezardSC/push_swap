/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:41:16 by jrenault          #+#    #+#             */
/*   Updated: 2023/02/25 14:22:25 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_p_list
{
	int				content;
	struct s_p_list	*next;
}			t_ps;

void	ft_lstadd_front(t_ps **lst, t_ps *new)
{
	new->next = *lst;
	*lst = new;
}

void	ft_stack(t_ps **lst, int content)
{
	t_ps	*tmp;

	tmp = malloc(sizeof(t_ps));
	if (!tmp)
		exit(0);
	tmp->content = content;
	ft_lstadd_front(lst, tmp);
}

int	main(int argc, char **argv)
{
	t_ps	*a;
	t_ps	*b;
	int		content;

	a = NULL;
	b = NULL;
	while (--argc > 0)
	{
		content = atoi(argv[argc]);
		ft_stack(&a, content);
	}
	while (a)
	{
		printf("%d\n", a->content);
		a = a->next;
	}
	// while (a)
	// {
	// 	content = ft_push(a);
	// }
	// b = ft_stack(b, content);
	return (0);
}
