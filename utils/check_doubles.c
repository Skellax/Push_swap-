/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_doubles.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:28:03 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/12 08:21:50 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_doubles(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (num == ft_atoi(argv[i]))
			return (TRUE);
		i++;
	}
	return (FALSE);
}
