/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:17:00 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 17:26:48 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** return an allocated memory fill with len bytes of s from the star byte of s
*/

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;
	size_t			j;

	if (!s)
		return (NULL);
	i = 0;
	j = i;
	ret = ft_strnew(len);
	if (!ret)
		return (NULL);
	while (i != start)
		i++;
	while (j < len && j < ft_strlen(s))
	{
		ret[j] = s[i];
		j++;
		i++;
	}
	return (ret);
}
