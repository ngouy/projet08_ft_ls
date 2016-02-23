/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:26:08 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:47:39 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strchr() function locates the first occurrence of c in the string
** pointed by s.
*/

#include "libft.h"

char				*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (!(*s))
			return (NULL);
		s++;
	}
	return ((char *)s);
}
