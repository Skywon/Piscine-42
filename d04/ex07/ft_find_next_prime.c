/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguedes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 11:08:40 by tguedes           #+#    #+#             */
/*   Updated: 2018/08/09 11:53:40 by tguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_is_prime(int nb)
{
	int j;
	int div;

	div = 0;
	j = 1;
	while (j <= nb)
	{
		if (nb % j == 0)
			div++;
		j++;
	}
	if (div == 2)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else
		if (ft_is_prime(nb) != 1)
		{
			while (ft_is_prime(nb) == 0)
			{
				nb++;
				ft_is_prime(nb);
			}
		}
	return (nb)
}
