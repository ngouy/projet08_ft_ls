/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 10:52:47 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:44:02 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Put a str followed by carriage return.
*/

#include "libft.h"

void				ft_putendl(char const *s)
{
	if (!s)
		return ;
	ft_putstr(s);
	ft_putchar('\n');
}
