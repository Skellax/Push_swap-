/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isnum.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 08:45:04 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/12 14:05:15 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i] != '\0')
	{
		if (!ft_isdigit(num[i]))
			return (FALSE);
		i++;
	}
	return (TRUE);
}
