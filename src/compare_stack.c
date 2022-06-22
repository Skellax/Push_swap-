/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:45:16 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/13 10:17:00 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	compare_stack(t_pile **a, t_pile **b)
{
	if ((*b)->next != NULL)
	{
		if ((*a)->index > (*a)->next->index
			&& (*b)->index < (*b)->next->index)
			ss(a, b);
		if ((*b)->index < (*b)->next->index)
			sb(b);
		if ((*a)->index > (*a)->next->index)
			sa(a);
	}
	else if ((*a)->index > (*a)->next->index)
		sa(a);
	else
		return ;
}
