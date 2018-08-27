/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:37:30 by pidecler          #+#    #+#             */
/*   Updated: 2018/08/19 11:52:24 by pidecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

char		*ft_realloc_str(char *old, int increase)
{
	char	*new;
	int		i;

	i = 0;
	while (old[i])
		i++;
	if ((new = malloc(sizeof(char) * (i + increase + 1))) == NULL)
		return (NULL);
	i = -1;
	while (old[i++])
		new[i] = old[i];
	free(old);
	return (new);
}

char		**ft_realloc_strtab(char **old, int increase)
{
	char	**new;
	int		i;

	i = 0;
	while (old[i])
		i++;
	if ((new = malloc(sizeof(char*) * (i + increase + 1))) == NULL)
		return (NULL);
	i = -1;
	while (old[i++])
		new[i] = old[i];
	free(old);
	new[i] = NULL;
	return (new);
}
