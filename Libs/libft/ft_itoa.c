/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:12:33 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:06:19 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_itoa() function return int translated into str
*/

#include "libft.h"

char				*ft_itoa(int n)
{
	int				len;
	int				pow10;
	char			*str;
	char			*ret;

	if ((pow10 = 10) && n == MIN_INT)
		return (ft_strdup(MIN_INT_TO_STR));
	len = n < 0 ? 2 : 1;
	while (n / pow10 && len++)
		pow10 *= 10;
	ret = ft_strnew(len - 1);
	if (((str = ret) || 1) && n < 0)
	{
		*str = '-';
		str++;
		n = -n;
	}
	while (pow10 != 1)
	{
		pow10 = pow10 / 10;
		*str = n / pow10 + 48;
		str++;
		n = n % pow10;
	}
	return (ret);
}
