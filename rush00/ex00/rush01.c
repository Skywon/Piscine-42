/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 15:59:23 by dcastill          #+#    #+#             */
/*   Updated: 2018/08/18 15:25:55 by tguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_top(int x)
{
	int i;

	i = 0;
	if (x == 1)
		ft_putchar('/');
	if (x > 1)
	{
		ft_putchar('/');
		while (i < x - 2)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('\\');
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
			ft_putchar('*');
		if (x > 1)
		{
			ft_putchar('*');
			while (i < x - 2)
			{
				ft_putchar(' ');
				i++;
			}
			ft_putchar('*');
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
		ft_putchar('\\');
	if (x > 1)
	{
		ft_putchar('\\');
		while (i < x - 2)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('/');
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
