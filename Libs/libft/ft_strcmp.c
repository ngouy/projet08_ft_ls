/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:08:40 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:51:21 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return 0 if s1 == s2, either
** return an integer greater than, or less than 0,
** according as the string s1 is greater than, equal to, or less than the
** string s2.  The comparison is done using unsigned characters,
** so that `\200' is greater than `\0'.
*/

#include "libft.h"

int					ft_strcmp(const char *s1, const char *s2)
{
	int				i;

	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
