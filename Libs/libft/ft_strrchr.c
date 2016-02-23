/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:26:08 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 17:18:50 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strchr() function locates the last occurrence of c in the string
** pointed by s.
*/

#include "libft.h"

char				*ft_strrchr(const char *s, int c)
{
	char			*ret;

	ret = NULL;
	while (*s)
	{
		if (*s == c)
			(ret = (char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	else
		return (ret);
}
