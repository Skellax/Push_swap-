/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:50:21 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/17 07:17:18 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/push_swap.h"

void	sort_tri(t_pile **a, t_pile **b)
{
	int	size;

	size = list_size(*a);
	if (size <= 5)
		sort_stack(a, b);
	else
		radix_sort(a, b);
}
