/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ind_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:07:28 by kkihn             #+#    #+#             */
/*   Updated: 2018/12/10 19:44:09 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_ind_end(char *buf)
{
	int i;
	int imax;
	int jmax;

	i = 0;
	imax = -1;
	jmax = -1;
	while (buf[i])
	{
		if (buf[i] == '#')
		{
			if (i / 4 > imax)
				imax = i / 4;
			if (i % 4 > jmax)
				jmax = i % 4;
		}
		i++;
	}
	return (imax * 4 + jmax);
}
