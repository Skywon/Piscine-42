/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguedes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 22:26:09 by tguedes           #+#    #+#             */
/*   Updated: 2018/08/19 22:28:55 by tguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPP
# define FT_OPP

typedef	struct	s_opp
{
	char	opp;
	int		(*calc)(int, int);
}				t_opp;

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);

t_opp g_opps [] = {
	{'+', ft_add},
	{'-', ft_sub},
	{'*', ft_mul},
	{'/', ft_div},
	{'%', ft_mod},
};

#endif
