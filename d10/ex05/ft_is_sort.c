/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguedes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:14:18 by tguedes           #+#    #+#             */
/*   Updated: 2018/08/22 01:12:59 by tguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		fml(int tamere, int tonpere)
{
	if (tamere < tonpere)
		return (-1);
	if (tamere > tonpere)
		return (1);
	return (0);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 0;
	res = 0;
	if (length <= 1)
		return (1);
	while (length > 1 && i < length)
	{
		if (sign == 0)
		{
			sign = (f(tab[i], tab[i + 1]));
			if (sign < 0 || sign > 0)
				res++;
		}
		i++;
		sign = 0;
	}
	if (res != length)
		return (0);
	else
		return (1);
}

int		main(void)
{
	int tab[5] = {1, 2, 3, 4};
	int tab2[5] = {4, 3, 2, 1};
	int tab3[5] = {1, 1, 1, 1};
	int tab4[5] = {4, 1, 3, 2};
	printf("Pour 1 : %d\n", ft_is_sort(tab, 5, fml));
	printf("Pour 1 : %d\n", ft_is_sort(tab2, 5, fml));
	printf("Pour 1 : %d\n", ft_is_sort(tab3, 5, fml));
	printf("Pour 0 : %d\n", ft_is_sort(tab4, 5, fml));
	return (0);
}
