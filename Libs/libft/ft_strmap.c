/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:29:21 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 17:07:19 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Create an copy of s and apply f on each byte of s.
*/

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	int				i;
	char			*ret;

	if (!s || !f)
		return (NULL);
	i = 0;
	ret = ft_strnew(ft_strlen(s));
	if (!ret)
		return (NULL);
	while (s[i])
	{
		ret[i] = f(s[i]);
		i++;
	}
	return (ret);
}
