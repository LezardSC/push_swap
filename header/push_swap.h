/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezard <lezard@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:25:03 by jrenault          #+#    #+#             */
/*   Updated: 2023/04/13 16:40:32 by lezard           ###   ########lyon.fr   */
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
int		check_error_before_split(char *numbers);
int		ft_atoi_push_swap(char *str);
void	ft_stack(t_ps **lst, int content);
int		ft_lstsize_ps(t_ps *lst);
void	ft_lstadd_front_ps(t_ps **lst, t_ps *new);
void	ft_lstadd_back_ps(t_ps **lst, t_ps *new);
void	ft_lstdelone_ps(t_list *lst, void (*del)(void *));
t_ps	*ft_lstlast_ps(t_ps *lst);
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
void	ft_radix(t_ps **a, t_ps **b);
void	nb_to_index(t_ps **a);
int		parsing_ps(t_ps **a, int argc, char **argv);
void	sort_three(t_ps **a);
void	sort_four(t_ps **a, t_ps **b, int nb_arg);
void	sort_five(t_ps **a, t_ps **b, int nb_arg);
int		which_sort(int argc, t_ps **a, t_ps **b);

#endif