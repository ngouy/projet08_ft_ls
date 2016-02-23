/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:15:00 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:38:05 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** same as memcpy but can overlap
** :http://stackoverflow.com/questions/4415910/memcpy-vs-memmove
*/

#include "libft.h"

static void			ft_annexe(char *dstc, char *srcc, size_t len)
{
	srcc += (len - 1);
	dstc += (len - 1);
	while (len > 0)
	{
		*dstc = *srcc;
		len--;
		dstc--;
		srcc--;
	}
}

void				*ft_memmove(void *dst, void const *src, size_t len)
{
	char			*dstc;
	char			*srcc;

	if (!dst || !src || !len)
		return (NULL);
	dstc = (char *)dst;
	srcc = (char *)src;
	if (dst <= src)
	{
		while (len > 0)
		{
			*dstc = *srcc;
			len--;
			dstc++;
			srcc++;
		}
	}
	else
		ft_annexe(dstc, srcc, len);
	return (dst);
}
