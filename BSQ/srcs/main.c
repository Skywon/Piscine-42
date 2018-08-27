/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llenotre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:14:41 by llenotre          #+#    #+#             */
/*   Updated: 2018/08/22 01:01:33 by llenotre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	parse_head(int fd, t_map *map)
{
	char *head;

	head = read_line(fd);
	map->lines = ft_atoi(head);
	while (*head >= '0' && *head <= '9')
		head++;
	map->empty = *head;
	head++;
	map->obstacle = *head;
	head++;
	map->full = *head;
	head++;
	if (*head)
		map->lines = 0;
}

void	parse_body(int fd, t_map *map)
{
	int i;

	map->content = (char**)malloc(sizeof(char*) * (map->lines + 1));
	i = 0;
	while (i < map->lines)
	{
		map->content[i] = read_line(fd);
		i++;
	}
	map->content[i] = 0;
	/*if (read_line(fd))
	{
		map->lines = 0;
		free(map->content);
	}*/
}

t_map	parse_map(int fd)
{
	t_map map;

	parse_head(fd, &map);
	if (map.lines > 0)
		parse_body(fd, &map);
	if (map.content == 0)
		map.lines = 0;
	return (map);
}

t_map	parse_map_file(char *file)
{
	int		fd;
	t_map	map;

	fd = open(file, O_RDONLY);
	map = parse_map(fd);
	close(fd);
	return (map);
}

int		main(int argc, char **argv)
{
	t_map map;
	int i;

	argc--;
	argv++;
	if (argc == 0)
	{
		map = parse_map(0);
		if (check_map(map))
		{
			map = find_square(map);
			print_map(map);
		}
		else
			ft_putstr("map error\n");
	}
	else
	{
		i = 0;
		while (i < argc)
		{
			//ft_putstr("A");
			map = parse_map_file(argv[i]);
			//ft_putstr("B");
			if (check_map(map))
			{
				map = find_square(map);
				//ft_putstr("C");
				print_map(map);
			}
			else
				ft_putstr("map error\n");
			i++;
		}
	}
	return (0);
}
