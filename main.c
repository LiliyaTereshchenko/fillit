/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 12:42:20 by kkihn             #+#    #+#             */
/*   Updated: 2018/12/13 15:19:56 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	*s;
	int		map_count;

	if (argc == 2)
	{
		if ((s = ft_read_map(argv[1])))
		{
			map_count = ft_map_count(s);
			if (map_count < 1 || map_count > 27)
				ft_error();
			else
				ft_solve(s, map_count);
		}
		else
			ft_error();
	}
	else
		ft_usage();
	return (0);
}
