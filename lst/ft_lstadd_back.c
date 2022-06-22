/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:04:20 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/12 10:29:38 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_lstadd_back(t_pile **p, t_pile *nv)
{
	t_pile	*n;

	if (*p)
	{
		n = ft_lstlast(*p);
		n->next = nv;
		nv->next = NULL;
	}
	else
	{
		*p = nv;
		(*p)->next = NULL;
	}
}
