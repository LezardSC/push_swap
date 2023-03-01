/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:25:03 by jrenault          #+#    #+#             */
/*   Updated: 2023/03/01 18:19:23 by jrenault         ###   ########lyon.fr   */
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
void	ft_lstadd_back_ps(t_ps **lst, t_ps *new);
t_ps	*ft_lstlast_ps(t_ps *lst);
void	ft_lstdelone_ps(t_list *lst, void (*del)(void *));
void	ft_sa(t_ps **a);
void	ft_sb(t_ps **b);
void	ft_ss(t_ps **a, t_ps **b);
void	ft_pb(t_ps **a, t_ps **b);
void	ft_pa(t_ps **a, t_ps **b);
void	ft_ra(t_ps **a);
void	ft_rb(t_ps **b);
void	ft_rr(t_ps **a, t_ps **b);
void	ft_rra(t_ps **a);
void	ft_rrb(t_ps **b);
void	ft_rrr(t_ps **a, t_ps **b);
void	nb_to_index(t_ps **a, t_ps **b);

#endif