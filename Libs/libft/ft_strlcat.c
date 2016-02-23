/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:40:01 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 17:05:06 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strlcpy() function copies up to size - 1 characters from the
** NUL-terminated string src to dst, NUL-terminating the result,
** and return the total length of the string they tried to create.
*/

#include "libft.h"

static size_t		min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

size_t				ft_strlcat(char *dst, const char *src, size_t size)
{
	char			*s3;
	size_t			i;
	size_t			len;
	size_t			j;

	len = (ft_strlen(dst));
	s3 = dst;
	i = 0;
	j = i;
	while (s3[j])
		j++;
	while (i < ft_strlen(src) && j < size - 1)
	{
		s3[j] = src[i];
		j++;
		i++;
	}
	s3[j] = '\0';
	return (min(len, size) + ft_strlen(src));
}
