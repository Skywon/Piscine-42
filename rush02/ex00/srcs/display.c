/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:53:54 by pidecler          #+#    #+#             */
/*   Updated: 2018/08/19 13:39:58 by pidecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr((nb / 10) * -1);
		ft_putchar((nb % 10) * -1 + '0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void		display_result(int number, t_size *size, int first)
{
	if (first != 0)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(number);
	ft_putstr("] [");
	ft_putnbr(size->x);
	ft_putstr("] [");
	ft_putnbr(size->y);
	ft_putstr("]");
}
