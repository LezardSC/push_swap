/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:25:03 by jrenault          #+#    #+#             */
/*   Updated: 2023/02/25 14:51:52 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "limits.h"

# include "../libft/libft.h"

typedef struct s_push_swap
{
	int					content;
	struct s_push_swap	*next;
}			t_ps;

int		main(int argc, char **argv);
int		check_error(char **argv);
void	ft_stack(t_ps **lst, int content);
void	ft_lstadd_front_ps(t_ps **lst, t_ps *new);

#endif