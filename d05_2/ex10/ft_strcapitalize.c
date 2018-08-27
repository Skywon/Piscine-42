/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguedes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 16:39:37 by tguedes           #+#    #+#             */
/*   Updated: 2018/08/14 22:36:42 by tguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int start;

	i = 0;
	start = 1;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] += (start ? 'a' - 'A' : 0);
			start = 0;
		}
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] += (start ? 'A' - 'a' : 0);
			start = 0;
		}
		if (str[i] <= '9' && str[i] >= '0')
			start = 0;
		else
			start = 1;
	}
	return (str);
}
