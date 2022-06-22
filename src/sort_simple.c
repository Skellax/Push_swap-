/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:46:25 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/16 12:51:53 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_2(t_pile **a)
{
	if (is_sorted(*a) == TRUE)
		return ;
	else
		sa(a);
}

void	sort_3(t_pile **a, t_pile **b)
{
	if (is_sorted(*a) == TRUE)
		return ;
	if (first_max_top(*a) == TRUE)
		ra(a);
	if (last_min_bottom(*a) == TRUE)
		rra(a);
	if ((*a)->index > (*a)->next->index)
		sa(a);
	if (is_sorted(*a) == FALSE)
		pb(a, b);
	if ((*a)->index > (*a)->next->index)
		sa(a);
	if (*b != NULL)
		pa(a, b);
	if ((*a)-> index > (*a)->next->index)
		sa(a);
}

void	sort_4(t_pile **a, t_pile **b)
{
	int	size;

	size = list_size(*a);
	if (is_sorted(*a) == TRUE)
		return ;
	while (size >= 3)
	{
		if (first_max_top(*a) == TRUE)
			ra(a);
		pb(a, b);
		size--;
	}
	while (*b != NULL)
	{
		compare_stack(a, b);
		pa(a, b);
	}
	if ((*a)->index > (*a)->next->index)
		sa(a);
}

void	sort_5(t_pile **a, t_pile **b)
{
	int	size;

	size = list_size(*a);
	if (is_sorted(*a) == TRUE)
		return ;
	while (size >= 3)
	{
		if (first_max_top(*a) == TRUE)
			ra(a);
		pb(a, b);
		size--;
	}
	if (first_min_top(*b) == TRUE)
		rb(b);
	else if (last_max_bottom(*b) == TRUE)
		rrb(b);
	while (*b != NULL)
	{
		compare_stack(a, b);
		pa(a, b);
	}
	if ((*a)->index > (*a)->next->index)
		sa(a);
}
