/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguedes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 10:48:19 by tguedes           #+#    #+#             */
/*   Updated: 2018/08/19 19:29:10 by tguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int(*f)(char*));
{
	int i;
	int j;
	int nb;

	i = 0;
	j = 0;
	nb = 0;
	while (tab[i][j] =! '0')
	{
		while (tab [i][j] =! '\0')
		{
			if (f(j) = 1)
				nb++;
			j++;
		}
		i++;
	}
	return (nb);
}