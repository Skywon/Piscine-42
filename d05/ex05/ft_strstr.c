/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguedes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:35:58 by tguedes           #+#    #+#             */
/*   Updated: 2018/08/15 03:06:24 by tguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *pstr;
	char *ptf;

	if (*to_find == 0)
		return (str);
	while (*str != '\0')
	{
		pstr = str;
		ptf = to_find;
		while (*pstr == *ptf && *pstr != 0 && *ptf != 0)
		{
			pstr++;
			ptf++;
		}
		if (*ptf == '\0')
			return (str);
		str++;
	}
	return (0);
}
