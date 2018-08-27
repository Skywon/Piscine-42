/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:49:04 by pidecler          #+#    #+#             */
/*   Updated: 2018/08/19 13:38:22 by pidecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

char		**get_tab(void)
{
	char	**tab;
	char	*new;
	int		i;

	i = 0;
	if ((tab = malloc(sizeof(char*))) == NULL)
		return (NULL);
	tab[0] = NULL;
	while ((new = ft_get_next_line(0)))
	{
		if ((tab = ft_realloc_strtab(tab, 1)) == NULL)
			return (NULL);
		tab[i++] = new;
		tab[i] = NULL;
	}
	if (tab[0] == NULL)
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}

void		check_colle(char **tab)
{
	int			flag;
	t_size		*size;

	flag = 0;
	if ((size = check_0(tab)))
		display_result(0, size, flag++);
	if ((size = check_1(tab)))
		display_result(1, size, flag++);
	if ((size = check_2(tab)))
		display_result(2, size, flag++);
	if ((size = check_3(tab)))
		display_result(3, size, flag++);
	if ((size = check_4(tab)))
		display_result(4, size, flag++);
	if (flag == 0)
		ft_putstr("aucune");
	ft_putstr("\n");
}

int			main(void)
{
	char	**tab;

	if ((tab = get_tab()) == NULL)
	{
		ft_putstr("aucune\n");
		return (1);
	}
	check_colle(tab);
	return (0);
}
