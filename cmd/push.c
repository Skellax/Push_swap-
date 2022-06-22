/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:05:49 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/13 07:51:39 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push(t_pile **dst, t_pile **src)
{
	t_pile	*tmp;
	t_pile	*dst2;
	t_pile	*src2;

	dst2 = *dst;
	src2 = *src;
	tmp = src2;
	src2 = src2->next;
	*src = src2;
	if (!dst2)
	{
		dst2 = tmp;
		dst2->next = NULL;
		*dst = dst2;
	}
	else
	{
		tmp->next = dst2;
		*dst = tmp;
	}
}

int	pa(t_pile **a, t_pile **b)
{
	if (list_size(*b) == 0)
		return (-1);
	else
	{
		ft_push(a, b);
		return (ft_printf("pa\n"));
	}
}

int	pb(t_pile **a, t_pile **b)
{
	if (list_size(*a) == 0)
		return (-1);
	else
	{
		ft_push(b, a);
		return (ft_printf("pb\n"));
	}
}
