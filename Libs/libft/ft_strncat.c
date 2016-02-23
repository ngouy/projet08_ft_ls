/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:40:01 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 17:08:32 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Concat s1 with n bytes of s2 in s1.
** Allocated memory in s2 must be enought long.
*/

#include "libft.h"

char				*ft_strncat(char *s1, const char *s2, size_t n)
{
	char			*s3;
	size_t			i;
	size_t			j;

	s3 = s1;
	i = 0;
	j = i;
	while (s3[j])
		j++;
	while (i < ft_strlen(s2) && i < n)
	{
		s3[j] = s2[i];
		j++;
		i++;
	}
	s3[j] = '\0';
	return (s1);
}
