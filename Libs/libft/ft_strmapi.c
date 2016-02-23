/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:52:17 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 17:07:52 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Create an copy of s and apply f on each byte of s (and gives it index).
*/

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	if (!s || !f)
		return (NULL);
	i = 0;
	ret = ft_strnew(ft_strlen(s));
	if (!ret)
		return (NULL);
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	return (ret);
}
