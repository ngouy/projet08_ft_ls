/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 02:24:43 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 15:28:59 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_atoi() function return str translated into int
** Return 0 if unable to translate it into int
** Stops to parse when find something not translatable
** Doesn't handle integer overflow
*/

#include "libft.h"

int					ft_atoi(const char *str)
{
	int				res;
	int				i;
	int				sign;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\f' || str[i] == ' '
			|| str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = sign - str[i] % 43;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
