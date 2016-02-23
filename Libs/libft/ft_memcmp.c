/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:00:24 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:31:31 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compare n first bytes of both strings.
** Return 0 if s1 and s2 qre identical,
** otherwise a pointer to the first different bytes.
*/

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*str1;
	char			*str2;
	size_t			i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	if (!s1 || !s2)
		return (1);
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str1[i] == str2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
