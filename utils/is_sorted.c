/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 08:14:14 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/13 15:12:36 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(t_pile *p)
{
	if (p == NULL)
		return (TRUE);
	while (p && p->next)
	{
		if (p->value > p->next->value)
			return (FALSE);
		p = p->next;
	}
	return (TRUE);
}
