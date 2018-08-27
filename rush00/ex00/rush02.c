/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguedes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 09:30:12 by tguedes           #+#    #+#             */
/*   Updated: 2018/08/18 15:26:28 by tguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_top(int x)
{
	int i;

	i = 0;
	if (x == 1)
		ft_putchar('A');
	if (x > 1)
	{
		ft_putchar('A');
		while (i < x - 2)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('A');
	}
}

void	ft_middle(int x, int y)
{
	int i;
	int d;

	i = 0;
	d = 0;
	while (d < y - 2)
	{
		if (x == 1)
			ft_putchar('B');
		if (x > 1)
		{
			ft_putchar('B');
			while (i < x - 2)
			{
				ft_putchar(' ');
				i++;
			}
			ft_putchar('B');
		}
		ft_putchar('\n');
		d++;
		i = 0;
	}
}

void	ft_bottom(int x)
{
	int i;

	i = 0;
	if (x == 1)
		ft_putchar('C');
	if (x > 1)
	{
		ft_putchar('C');
		while (i < x - 2)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
	}
	if (x >= 1 && y >= 1)
	{
		if (y >= 1)
			ft_top(x);
		if (y > 2)
		{
			ft_putchar('\n');
			ft_middle(x, y);
		}
		if (y >= 2)
			ft_bottom(x);
	}
	ft_putchar('\n');
}
