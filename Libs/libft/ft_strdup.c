/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:28:07 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:55:34 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocate required memory and copy all bytes from s1 to the returned str
*/

#include "libft.h"

char				*ft_strdup(const char *s1)
{
	char			*ret;

	ret = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (ret)
		return (ft_strcpy(ret, s1));
	return (NULL);
}
