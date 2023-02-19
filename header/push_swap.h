/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:25:03 by jrenault          #+#    #+#             */
/*   Updated: 2023/02/19 15:25:44 by jrenault         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "limits.h"

# include "../libft/libft.h"

typedef struct s_p_list
{
 	int				value;
 	struct s_p_list	*next;
 }			t_push_swap;

int	main(int argc, char **argv);
int	check_error(char **argv);

#endif