/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_0.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:38:53 by pidecler          #+#    #+#             */
/*   Updated: 2018/08/19 13:00:58 by pidecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

static int		check_border(char c, t_size size, int i, int j)
{
	if (i > 0 && j > 0 && i < size.x - 1 && j < size.y - 1 && c != ' ')
		return (1);
	else if (i > 0 && i < size.x - 1 && (j == 0 || j == size.y - 1)
			&& c != '-')
		return (1);
	else if (j > 0 && j < size.y - 1 && (i == 0 || i == size.x - 1)
			&& c != '|')
		return (1);
	return (0);
}

static int		check_lil(t_size size, char **str)
{
	int	i;
	int	j;

	i = 0;
	if ((j = 1) && size.x == 1 && size.y == 1 && str[0][0] == 'o')
		return (1);
	else if (str[0][0] != 'o')
		return (0);
	else if (size.x == 1 && size.y > 1 && str[0][0] == 'o')
	{
		while (j < size.y - 1)
			if (str[j++][0] != '|')
				return (0);
		if (str[j][0] == 'o')
			return (0);
	}
	else if (size.x > 1 && size.y == 1 && str[0][0] == 'o')
	{
		while (i < size.x - 1)
			if (str[0][i++] != '-')
				return (0);
		if (str[0][i] == 'o')
			return (0);
	}
	return (1);
}

t_size			*check_0(char **str)
{
	int		i;
	int		j;
	t_size	*size;

	if ((size = malloc(sizeof(t_size))) == NULL)
		return (NULL);
	size->x = 0;
	size->y = 0;
	while (str[size->y])
		(size->y)++;
	while (str[0][size->x])
		(size->x)++;
	if ((size->y == 1 || size->x == 1) && check_lil(*size, str))
		return (size);
	if ((j = -1) && (str[0][0] != 'o' || str[0][size->x - 1] != 'o'
		|| str[size->y - 1][0] != 'o' || str[size->y - 1][size->x - 1] != 'o'))
		return (NULL);
	while (++j < size->y)
	{
		i = -1;
		while (++i < size->x)
			if (check_border(str[j][i], *size, i, j))
				return (NULL);
	}
	return (size);
}
