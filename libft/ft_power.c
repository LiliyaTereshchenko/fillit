/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 13:55:52 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/27 17:48:38 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int nb, int p)
{
	if (p < 0)
		return (0);
	else if (p == 0)
		return (1);
	else if (p == 1)
		return (nb);
	return (nb * ft_power(nb, p - 1));
}
