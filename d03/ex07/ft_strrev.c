/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguedes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 12:05:04 by tguedes           #+#    #+#             */
/*   Updated: 2018/08/10 13:30:00 by tguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int size;
	int q;
	int temp;

	q = 0;
	temp = 0;
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	while (q < size / 2)
	{
		temp = str[q];
		str[q] = str[size - q - 1];
		str[size - q - 1] = temp;
		q++;
	}
	return (str);
}
