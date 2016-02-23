/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:14:14 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:38:56 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Set n byte to c of the allocated memory
*/

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	char			*n;
	size_t			i;

	n = b;
	i = 0;
	while (i < len)
	{
		*n = (char)c;
		n++;
		i++;
	}
	return (b);
}
