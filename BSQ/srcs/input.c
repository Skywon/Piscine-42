/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llenotre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 17:26:47 by llenotre          #+#    #+#             */
/*   Updated: 2018/08/21 23:35:24 by llenotre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*grow(char *buffer, int size, int new_size)
{
	char	*buff;
	int		i;

	if (!(buff = (char*)malloc(new_size)))
		return (0);
	i = 0;
	while (i < size)
	{
		buff[i] = buffer[i];
		i++;
	}
	return (buff);
}

char	*read_line(int fd)
{
	int		size;
	char	*buffer;

	// size = (buff_size > 0 ? buff_size : BUFFER_SIZE);
	size = BUFFER_SIZE;
	if (!(buffer = (char*)malloc(size)))
		return (0);
	*buffer = '\0';
	while (read(fd, buffer + (size - BUFFER_SIZE), BUFFER_SIZE))
	{
		if (buffer[size - BUFFER_SIZE] == '\n')
		{
			buffer[size - BUFFER_SIZE] = '\0';
			break ;
		}
		if (!(buffer = grow(buffer, size, size + BUFFER_SIZE)))
			return (0);
		size += BUFFER_SIZE;
	}
	return (buffer);
}
