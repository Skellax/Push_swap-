/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:30:09 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/17 07:17:50 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_max_bits(t_pile **a)
{
	t_pile	*tmp;
	int		max;
	int		max_bits;
	int		size;

	tmp = *a;
	max = tmp->index;
	max_bits = 0;
	while (tmp)
	{
		if (max < tmp->index)
			max = tmp->index;
		tmp = tmp->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_pile **a, t_pile **b)
{
	t_pile	*tmp;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	tmp = *a;
	size = list_size(*a);
	max_bits = get_max_bits(a);
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			tmp = *a;
			if (((tmp->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (list_size(*b) != 0)
			pa(a, b);
	}
}
