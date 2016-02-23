/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:52:46 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:26:58 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Find the first occurrence of c in s (of lenght n) and return a pointer
** to the byte located or NULL if not no such byte exists
*/

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;

	if (s)
	{
		str = (char *)s;
		while (n > 0)
		{
			if (*str == (char)c)
				return ((void *)str);
			n--;
			str++;
		}
	}
	return (NULL);
}
