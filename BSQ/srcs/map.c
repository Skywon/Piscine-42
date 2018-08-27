/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llenotre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:30:11 by llenotre          #+#    #+#             */
/*   Updated: 2018/08/21 20:59:34 by llenotre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	ft_putnbr(int n)
{
	if (n > 9) ft_putnbr(n / 10);
	ft_putchar('0' + (n % 10));
}

/* int		search_obstacle(t_map map, t_pos pos, int size)
{
	int i;

	i = pos.x;
	while (i < pos.x + size)
	{
		if (map.content[pos.y + size - 1][i] != map.empty)
			return (1);
		i++;
	}
	i = pos.y;
	while (i < pos.y + size)
	{
		if (map.content[i][pos.x + size - 1] != map.empty)
			return (1);
		i++;
	}
	return (0);
}

int		get_square_size(t_map map, int line_length, t_pos pos)
{
	int size;

	if (map.content[pos.y][pos.x] == map.obstacle)
		return (0);
	size = 2;
	while ((pos.x + size < line_length) && (pos.y + size < map.lines))
	{
		if (search_obstacle(map, pos, size))
			break ;
		size++;
	}
	size--;
	return (size);
}

void	draw_square(t_map *map, t_pos pos, int size)
{
	t_pos i;

	i.x = pos.x;
	while (i.x < pos.x + size)
	{
		i.y = pos.y;
		while (i.y < pos.y + size)
		{
			if (map->content[i.y][i.x] != map->obstacle) // TODO
				map->content[i.y][i.x] = map->full;
			else // TODO
				map->content[i.y][i.x] = '?'; // TODO
			i.y++;
		}
		i.x++;
	}
}

t_map	find_square(t_map map)
{
	t_pos	i;
	int		line_length;
	int		s;
	t_pos	pos;
	int		size;

	i.y = 0;
	line_length = ft_strlen(map.content[i.y]);
	size = 0;
	while (i.y < map.lines)
	{
		i.x = 0;
		while (i.x < line_length)
		{
			s = get_square_size(map, line_length, i);
			if (s > size)
			{
				pos = i;
				size = s;
			}
			i.x++;
		}
		i.y++;
	}
	draw_square(&map, pos, size);
	return (map);
} */

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/* int		count_obstacles(t_map map)
{
	int length_length;
	int i;
	int j;
	int count;

	line_length = ft_strlen(map.content[0]);
	i = 0;
	count = 0;
	while (i < line_length)
	{
		j = 0;
		while (j < map.lines)
		{
			if (map.content[j][i] == map.obstacle)
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

int		*find_obstacles(t_map map, bool axis, int count)
{
	int length_length;
	int i;
	int j;
	int k;
	int *tab;

	line_length = ft_strlen(map.content[0]);
	i = 0;
	k = 0;
	tab = (int*)malloc(sizeof(int) * (count + 1));
	while (i < line_length)
	{
		j = 0;
		while (j < map.lines)
		{
			if (map.content[j][i] == map.obstacle)
			{
				tab[k] = (axis ? i : j);
				k++;
			}
			j++;
		}
		i++;
	}
	tab[k] = -1;
	return (tab);
}

t_pos	find_higher_size(int *x, int *y, int *size)
{
	int i;
	int last;
	t_pos pos;
	int s1;
	int s2;

	i = 0;
	last = 0;
	while (x[i] != -1)
	{
		if ((x[i + 1] - x[i]) > (x[i] - last))
		{
			pos.x = x[i];
			s1 = x[i + 1] - x[i];
		}
		last = x[i];
		i++;
	}
	// TODO Check right border
	i = 0;
	last = 0;
	while (y[i] != -1)
	{
		// TODO
		i++;
	}
	// TODO Check bottom border
	*size = s2;
	return (pos);
}

void	draw_square(t_map map, t_pos pos, int size)
{
	t_pos i;

	i.x = pos.x;
	while (i.x < pos.x + size)
	{
		i.y = pos.y;
		while (i.y < pos.y + size)
		{
			if (map->content[i.y][i.x] != map->obstacle) // TODO
				map->content[i.y][i.x] = map->full;
			else // TODO
				map->content[i.y][i.x] = '?'; // TODO
			i.y++;
		}
		i.x++;
	}
}

t_map	find_square(t_map map)
{
	int count;
	int *x;
	int *y;
	int size;

	count = count_obstacles(map);
	x = find_obstacles(map, 0, count);
	y = find_obstacles(map, 1, count);
	draw_square(map, find_higher_size(x, y, &size), size);
	return (map);
} */

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*int		count_obstacles(t_map map)
{
	int length_length;
	int i;
	int j;
	int count;

	line_length = ft_strlen(map.content[0]);
	i = 0;
	count = 0;
	while (i < line_length)
	{
		j = 0;
		while (j < map.lines)
		{
			if (map.content[j][i] == map.obstacle)
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

t_pos	*get_all_obstacles(t_map map)
{
	int		length_length;
	t_pos	i;
	int		j;
	int		*tab;

	line_length = ft_strlen(map.content[0]);
	i.y = 0;
	j = 0;
	tab = (int*)malloc(sizeof(int) * (count_obstacle(map) + 1));
	while (i.y < map.lines)
	{
		i.x = 0;
		while (i.x < map.line_length)
		{
			if (map.content[j][i] == map.obstacle)
			{
				tab[j] = i;
				j++;
			}
			i.x++;
		}
		i.y++;
	}
	tab[k] = 0;
	return (tab);
} */

int		is_possible(t_map map, /*t_pos *obstacles, */t_pos pos, int size)
{
	int		line_length;
	t_pos	i;

	line_length = ft_strlen(map.content[0]);
	if ((pos.x + size > line_length) || (pos.y + size > map.lines))
		return (0);
	i.y = pos.y;
	while (i.y < pos.y + size)
	{
		i.x = pos.x;
		while (i.x < pos.x + size)
		{
			if (map.content[i.y][i.x] == map.obstacle)
				return (0);
			i.x++;
		}
		i.y++;
	}
	return (1);
}

void	draw_square(t_map map, t_pos pos, int size)
{
	t_pos i;

	i.y = pos.y;
	while (i.y < pos.y + size)
	{
		i.x = pos.x;
		while (i.x < pos.x + size)
		{
			if (map.content[i.y][i.x] != map.obstacle) // TODO
				map.content[i.y][i.x] = map.full;
			else // TODO
				map.content[i.y][i.x] = '?'; // TODO
			i.x++;
		}
		i.y++;
	}
}

void	check_square(t_map map, t_pos *pos, int *best, t_pos i)
{
	while (1)
	{
		if (is_possible(map, /*obstacles, */i, *best + 1))
		{
			*pos = i;
			(*best)++;
		}
		else
			break ;
	}
}

t_map	find_square(t_map map)
{
	int		line_length;
	//t_pos	*obstacles;
	t_pos	i;
	t_pos	pos;
	int		best;

	line_length = ft_strlen(map.content[0]);
	i.y = -1;
	best = 0;
	while (i.y++ < map.lines)
	{
		i.x = -1;
		while (i.x++ < line_length)
			check_square(map, &pos, &best, i);
	}
	draw_square(map, pos, best);
	return (map);
}

void	print_map(t_map map)
{
	int i;
	int j;

	i = 0;
	while (map.content[i])
	{
		j = 0;
		while (map.content[i][j])
		{
			ft_putchar(map.content[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
