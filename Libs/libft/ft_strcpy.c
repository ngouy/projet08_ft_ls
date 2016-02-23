/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:09:26 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:52:35 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copy all bytes from <src> to already allocated memory space <dst>
*/

#include "libft.h"

char				*ft_strcpy(char *dst, const char *src)
{
	int				i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
