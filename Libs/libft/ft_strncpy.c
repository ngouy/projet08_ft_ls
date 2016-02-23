/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:10:55 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 17:11:00 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copy n bytes from <src> to already allocated memory space <dst>
*/

#include "libft.h"

char				*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t			i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
