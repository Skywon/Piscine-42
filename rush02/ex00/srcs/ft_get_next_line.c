/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:44:58 by pidecler          #+#    #+#             */
/*   Updated: 2018/08/19 13:38:34 by pidecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

char			*ft_get_next_line(int fd)
{
	char	buffer[1];
	char	*str;
	int		i;

	i = 0;
	if ((str = malloc(sizeof(char))) == NULL)
		return (NULL);
	str[0] = 0;
	while (read(fd, buffer, 1) && buffer[0] != '\n')
	{
		if ((str = ft_realloc_str(str, 1)) == NULL)
			return (NULL);
		str[i++] = buffer[0];
		str[i] = 0;
	}
	if (str[0] == 0)
	{
		free(str);
		return (NULL);
	}
	return (str);
}
