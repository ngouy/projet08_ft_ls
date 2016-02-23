/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:27:02 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 15:29:10 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** return 1 if c is a letter or a digit, 0 either
*/

#include "libft.h"

int					ft_isalnum(int c)
{
	return ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122));
}