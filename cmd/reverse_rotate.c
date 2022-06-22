/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:03:41 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/12 10:33:12 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_reverse_rotate(t_pile **p)
{
	t_pile	*tmp;
	t_pile	*start;

	tmp = *p;
	start = ft_lstlast(tmp);
	while (tmp)
	{
		if (tmp->next->next == NULL)
		{
			tmp->next = NULL;
			break ;
		}
		tmp = tmp->next;
	}
	start->next = *p;
	*p = start;
}

int	rra(t_pile **a)
{
	if (list_size(*a) < 2)
		return (-1);
	else
	{
		ft_reverse_rotate(a);
		return (ft_printf("rra\n"));
	}
}

int	rrb(t_pile **b)
{
	if (list_size(*b) < 2)
		return (-1);
	else
	{
		ft_reverse_rotate(b);
		return (ft_printf("rrb\n"));
	}
}

int	rrr(t_pile **a, t_pile **b)
{
	if ((list_size(*a) < 2) || (list_size(*b) < 2))
		return (-1);
	else
	{
		ft_reverse_rotate(a);
		ft_reverse_rotate(b);
		return (ft_printf("rrr\n"));
	}
}
