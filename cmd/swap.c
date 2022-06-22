/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:47:14 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/16 15:15:32 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(t_pile **p)
{
	t_pile	*p1;
	int		tmp1;
	int		tmp2;

	p1 = *p;
	tmp1 = p1->value;
	tmp2 = p1->index;
	p1->value = p1->next->value;
	p1->index = p1->next->index;
	p1->next->value = tmp1;
	p1->next->index = tmp2;
}

int	sa(t_pile **a)
{
	if (list_size(*a) < 2)
		return (-1);
	else
	{
		ft_swap(a);
		return (ft_printf("sa\n"));
	}
}

int	sb(t_pile **b)
{
	if (list_size(*b) < 2)
		return (-1);
	else
	{
		ft_swap(b);
		return (ft_printf("sb\n"));
	}
}

int	ss(t_pile **a, t_pile **b)
{
	if (list_size(*a) < 2 || list_size(*b) < 2)
		return (-1);
	else
	{
		ft_swap(a);
		ft_swap(b);
		return (ft_printf("ss\n"));
	}
}
