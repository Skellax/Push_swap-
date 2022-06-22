/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 08:46:34 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/05/16 14:28:38 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_stack(t_pile **p, int argc, char **argv)
{
	t_pile	*new;
	char	**res;
	int		i;

	if (argc == 2)
		res = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		res = argv;
	}
	while (res[i])
	{
		new = ft_list_new(ft_atoi(res[i]));
		ft_lstadd_back(p, new);
		i++;
	}
	index_search(*p);
	if (argc == 2)
		ft_free(res);
}

int	main(int argc, char **argv)
{
	t_pile	**a;
	t_pile	**b;

	if (argc < 2)
		return (-1);
	check_args(argc, argv);
	a = (t_pile **)malloc(sizeof(t_pile));
	b = (t_pile **)malloc(sizeof(t_pile));
	*a = NULL;
	*b = NULL;
	init_stack(a, argc, argv);
	if (is_sorted(*a))
	{
		free_pile(*a);
		free_pile(*b);
		return (0);
	}
	sort_tri(a, b);
	free_pile(*a);
	free_pile(*b);
}
