/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_search.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:53:48 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/16 14:29:25 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	index_search(t_pile *p)
{
	t_pile	*res;
	t_pile	*start;
	int		index;

	start = p;
	res = p;
	while (res != 0)
	{
		p = start;
		index = 0;
		while (p)
		{
			if (res->value > p->value)
				index++;
			p = p->next;
		}
		res->index = index;
		res = res->next;
	}
}
