/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:21:33 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 15:29:08 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_bzero() function writes n 0 bytes to the string s.
** If n is zero, ft_bzero() does nothing.
*/

#include "libft.h"

void				ft_bzero(void *s, size_t n)
{
	size_t			i;
	char			*c;

	c = s;
	i = 0;
	while (i < n)
	{
		*(c + i) = '\0';
		i++;
	}
}
