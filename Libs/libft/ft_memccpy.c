/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:30:12 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:23:57 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copy n bytes from <src> to already allocated memory space <dst>
** until:
** - n is reached and NULL is returned
** - the char c (copied) occurs and a pointer after this c in <dst> is returned
*/

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*d;
	char			*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return ((void *)(d + i + 1));
		i++;
	}
	return (NULL);
}
