/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 11:44:07 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:06:26 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** this function need to be deleted or modified
*/

#include "libft.h"

char				*ft_join_free(char *s1, char *s2)
{
	free(s2);
	return (s1);
}
