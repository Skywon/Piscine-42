/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguedes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 10:44:22 by tguedes           #+#    #+#             */
/*   Updated: 2018/08/22 11:21:19 by tguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef	struct	s_list
{
	struct	s_list	*next;
	void			*data;
}				t_list;
