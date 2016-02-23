/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:27:15 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 17:00:57 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** apply the fonction f() for byte of the string s,
** and gives to the function f() the index of the current
** char wich f() will be apply on.
*/

#include "libft.h"

void				ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	char			*pt;

	if (!s || !f)
		return ;
	i = 0;
	pt = s;
	while (s[i])
	{
		f(i, pt);
		i++;
		pt++;
	}
}
