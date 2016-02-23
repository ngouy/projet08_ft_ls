/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 11:05:35 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:40:17 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Pow of a number handeling integer overflow -> return 0 if its the case.
*/

#include "libft.h"

static int			ft_wil_overflow(int i, int j)
{
	int				k;

	k = i * j;
	return (k / j == i ? k : 0);
}

int					ft_pow(int x, int pow)
{
	int				ret;

	ret = x;
	if (pow < 0 || x == 0)
		return (0);
	if (pow == 0)
		return (1);
	if (pow == 1)
		return (x);
	while (pow != 1)
	{
		if (!(ret = ft_wil_overflow(ret, x)))
			return (0);
		pow--;
	}
	return (ret);
}
