/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:32:31 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/16 15:16:22 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

//MACRO 

# define INTMAX 2147483647
# define INTMIN -2147483648
# define TRUE 1
# define FALSE 0

// Structures 

typedef struct s_pile
{
	int				value;
	int				index;
	struct s_pile	*next;
}	t_pile;

//FUNCTIONS 

t_pile	*ft_list_new(int value);
int		list_size(t_pile *p);
void	ft_lstadd_back(t_pile **p, t_pile *nv);
void	ft_add_list(t_pile	**p, t_pile *nv);
t_pile	*ft_lstlast(t_pile *p);
void	error_msg(char *msg);
void	ft_free(char **str);
int		first_max_top(t_pile *p);
int		first_min_top(t_pile *p);
int		last_max_bottom(t_pile *p);
int		last_min_bottom(t_pile *p);
void	free_pile(t_pile *p);
int		check_doubles(int num, char **argv, int i);
int		is_sorted(t_pile *p);
int		isnum(char *num);
void	check_args(int argc, char **argv);
void	index_search(t_pile *p);
void	ft_push(t_pile **dst, t_pile **src);
int		pa(t_pile **a, t_pile **b);
int		pb(t_pile **b, t_pile **a);
void	ft_swap(t_pile **p);
int		sa(t_pile**a);
int		sb(t_pile **b);
int		ss(t_pile **a, t_pile **b);
void	ft_rotate(t_pile **p);
int		ra(t_pile **a);
int		rb(t_pile **b);
int		rr(t_pile **a, t_pile **b);
void	ft_reverse_rotate(t_pile **p);
int		rra(t_pile **a);
int		rrb(t_pile **b);
int		rrr(t_pile **a, t_pile **b);
void	compare_stack(t_pile **a, t_pile **b);
void	sort_2(t_pile **a);
void	sort_3(t_pile **a, t_pile **b);
void	sort_4(t_pile **a, t_pile **b);
void	sort_5(t_pile **a, t_pile **b);
void	sort_stack(t_pile **a, t_pile **b);
int		get_max_bits(t_pile **a);
void	radix_sort(t_pile **a, t_pile **b);
void	init_stack(t_pile **p, int argc, char **argv);
void	sort_tri(t_pile **a, t_pile **b);
int		main(int argc, char **argv);

#endif
