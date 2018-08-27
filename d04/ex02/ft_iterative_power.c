/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguedes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 12:40:04 by tguedes           #+#    #+#             */
/*   Updated: 2018/08/09 09:38:00 by tguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	if (power > 1)
		while (power > 0)
			res = nb * nb;
	if (power == 1)
		res = 1;
	if (power <= 0)
		res = 0;
	return res;
}
