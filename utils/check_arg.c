/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:31:42 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/12 14:13:05 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_args(int argc, char **argv)
{
	int		i;
	long	tmp;
	char	**res;

	if (argc == 2)
		res = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		res = argv;
	}
	while (res[i])
	{
		tmp = ft_atoi(res[i]);
		if (isnum(res[i]) == FALSE)
			error_msg("ERROR\n");
		if (check_doubles(tmp, res, i) == TRUE)
			error_msg("ERROR\n");
		if (tmp > INTMAX || tmp < INTMIN)
			error_msg("ERROR\n");
		i++;
	}
	if (argc == 2)
		ft_free(res);
}
