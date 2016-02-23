/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:29:00 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:17:55 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** allocate and return a part of memory of a certain size
*/

#include "libft.h"

void				*ft_memalloc(size_t size)
{
	void			*ret;
	char			*tb;
	size_t			i;

	i = 0;
	if (size == 0)
		return (NULL);
	ret = malloc(sizeof(char) * size);
	tb = (char *)ret;
	if (!ret)
		return (NULL);
	while (i < size)
	{
		tb[i] = '\0';
		i++;
	}
	return (ret);
}
