/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llenotre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:45:15 by llenotre          #+#    #+#             */
/*   Updated: 2018/08/21 23:53:48 by llenotre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>

# define BUFFER_SIZE	1

typedef struct	s_map
{
	int		lines;
	char	empty;
	char	obstacle;
	char	full;
	char	**content;
}				t_map;

typedef struct	s_pos
{
	int x;
	int y;
}				t_pos;

t_map			find_square(t_map map);
void			print_map(t_map map);

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_atoi(char *str);
int				ft_strlen(char *str);

char			*read_line(int fd);

int				check_map(t_map map);

#endif
