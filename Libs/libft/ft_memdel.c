/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:34:49 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:32:48 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Free the allocated memory and prevent from crash if not allocated.
*/

#include "libft.h"

void				ft_memdel(void **ap)
{
	if (ap && *ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
