/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguedes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 14:47:21 by tguedes           #+#    #+#             */
/*   Updated: 2018/08/15 03:08:33 by tguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while ((s1[i] && i <= n) || (s2[j] && j <= n))
	{
		if (s1[i] != s2[j])
		{
			if (s1[i] > s2[j])
				return (1);
			if (s1[i] < s2[j])
				return (-1);
		}
		if (s1[i] != '\0')
			i++;
		if (s2[j] != '\0')
			j++;
	}
	return (0);
}

int main()
{
	printf("%s", ft_strncmp("coucou", "COUCOU", 4));
	return (0);
}
