/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:40:01 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:46:02 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Concat s1 with s2 in s1. Allocated memory in s2 must be enought long.
*/

#include "libft.h"

char				*ft_strcat(char *s1, const char *s2)
{
	char			*s3;
	size_t			i;
	int				j;

	s3 = s1;
	i = 0;
	j = i;
	while (s3[j])
		j++;
	while (i < ft_strlen(s2))
	{
		s3[j] = s2[i];
		j++;
		i++;
	}
	s3[j] = '\0';
	return (s1);
}
