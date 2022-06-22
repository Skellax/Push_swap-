/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:48:54 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/12 10:22:29 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate(t_pile **p)
{
	t_pile	*tmp;
	t_pile	*end;

	tmp = *p;
	end = ft_lstlast(tmp);
	*p = tmp->next;
	tmp->next = NULL;
	end->next = tmp;
}

int	ra(t_pile **a)
{
	if (list_size(*a) < 2)
		return (-1);
	else
	{
		ft_rotate(a);
		return (ft_printf("ra\n"));
	}
}

int	rb(t_pile **b)
{
	if (list_size(*b) < 2)
		return (-1);
	else
	{
		ft_rotate(b);
		return (ft_printf("rb\n"));
	}
}

int	rr(t_pile **a, t_pile **b)
{
	if ((list_size(*a) < 2) || (list_size(*b) < 2))
		return (-1);
	else
	{
		ft_rotate(a);
		ft_rotate(b);
		return (ft_printf("rr\n"));
	}
}
