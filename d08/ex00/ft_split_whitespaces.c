/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguedes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 10:53:12 by tguedes           #+#    #+#             */
/*   Updated: 2018/08/13 17:27:14 by tguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char **ft_split_whitespaces(char *str)
{
	int i;
	char **tab;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	tab = (char**)malloc(sizeof(char*) * (**str));
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
			if (str[i] < 'z' && str[i] > 'a')
			{
				while (str[i] != ' ' || str != '\t' || str[i] != '\n')
				{
					tab[x][y] = (char*)malloc(sizeof(char) * (ft_strlen(char *str)));
					tab[x][y] = str[i];
					x++;
					i++;
				}	
				y++;
			}
		}
	}
}
