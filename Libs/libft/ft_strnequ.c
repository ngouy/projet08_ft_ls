/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:10:44 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 17:28:31 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return 1 if s1 n first bytes are equals to  s2 n first bytes, 0 either.
*/

#include "libft.h"

int					ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t			i;

	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (1);
		i++;
	}
	if (i < n)
		return (0);
	return (1);
}
