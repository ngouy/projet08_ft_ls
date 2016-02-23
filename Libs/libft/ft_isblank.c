/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 10:47:41 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:05:48 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** return 1 if c is a blank str, 0 either;
** NULL considered as blank
*/

#include "libft.h"

int					ft_isblank(char *str)
{
	while (str && *str)
	{
		if (!ft_isspace(*str))
			return (0);
		str++;
	}
	return (1);
}
