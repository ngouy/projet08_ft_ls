/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:21:37 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:58:26 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** apply the fonction f() for byte of the string s
*/

#include "libft.h"

void				ft_striter(char *s, void (*f)(char*))
{
	char			*pt;

	if (!s || !f)
		return ;
	pt = s;
	while (*pt)
	{
		f(pt);
		pt++;
	}
}
