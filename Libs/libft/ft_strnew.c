/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:37:17 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 17:13:49 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocate memory for new str of size length and fill it with '\0'
*/

#include "libft.h"

char				*ft_strnew(size_t size)
{
	char			*str;
	size_t			i;

	if (size + 1 == 0)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	while (i <= size)
		str[i++] = '\0';
	return (str);
}
