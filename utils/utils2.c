/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:32:40 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/16 12:08:35 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	last_min_bottom(t_pile *p)
{
	t_pile	*last;
	int		min;

	last = ft_lstlast(p);
	min = last->value;
	while (p->next)
	{
		if (min > p->value)
			return (FALSE);
		p = p->next;
	}
	return (TRUE);
}

int	last_max_bottom(t_pile *p)
{
	t_pile	*last;
	int		max;

	last = ft_lstlast(p);
	max = last->value;
	while (p->next)
	{
		if (max < p->value)
			return (FALSE);
		p = p->next;
	}
	return (TRUE);
}
