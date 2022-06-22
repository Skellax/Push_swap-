/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 08:51:20 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/17 14:11:17 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_msg(char *msg)
{
	ft_printf("%s", msg);
	exit (1);
}

int	first_max_top(t_pile *p)
{
	int	max;

	max = p->value;
	while (p)
	{
		if (max < p->value)
			return (FALSE);
		p = p->next;
	}
	return (TRUE);
}

int	first_min_top(t_pile *p)
{
	int	min;

	min = p->value;
	while (p && p->next)
	{
		if (min > p->value)
			return (FALSE);
		p = p->next;
	}
	return (TRUE);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		free (str[i--]);
}

void	free_pile(t_pile *p)
{
	t_pile	*tmp;

	while (p)
	{
		tmp = p;
		p = p->next;
		free(tmp);
	}
	free(p);
}
