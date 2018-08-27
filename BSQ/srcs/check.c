/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llenotre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 23:35:52 by llenotre          #+#    #+#             */
/*   Updated: 2018/08/22 00:54:57 by llenotre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	check_lines(t_map map)
{
	int i;
	int line_length;

	i = 0;
	line_length = 0;
	while (map.content[i])
	{
		if (i == 0)
			line_length = ft_strlen(map.content[i]);
		if (line_length == 0 || ft_strlen(map.content[i]) != line_length)
		{
			map.lines = 0;
			free(map.content);
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_content(t_map map)
{
	int line_length;
	int i;
	int j;

	line_length = ft_strlen(map.content[0]);
	i = 0;
	while (i < map.lines)
	{
		j = 0;
		while (j < line_length)
		{
			if (map.content[i][j] != map.empty
				&& map.content[i][j] != map.obstacle
				&& map.content[i][j] != map.full)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_map(t_map map)
{
	if (map.lines == 0)
		return (0);
	if (!check_lines(map))
		return (0);
	if (!check_content(map))
		return (0);
	return (1);
}
