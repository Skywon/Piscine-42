/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:16:50 by pidecler          #+#    #+#             */
/*   Updated: 2018/08/18 18:26:07 by pidecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct		s_size
{
	int	x;
	int	y;
}					t_size;

char				*ft_get_next_line(int fd);

char				*ft_realloc_str(char *old, int increase);
char				**ft_realloc_strtab(char **old, int increase);

void				ft_putstr(char *str);
void				display_result(int number, t_size *size, int first);
void				ft_putnbr(int nb);

t_size				*check_0(char **str);
t_size				*check_1(char **str);
t_size				*check_2(char **str);
t_size				*check_3(char **str);
t_size				*check_4(char **str);

#endif
