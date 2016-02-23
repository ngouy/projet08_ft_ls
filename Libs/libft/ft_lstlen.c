/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 16:20:58 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:13:03 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** return the number of link of the list
*/

#include "libft.h"

int					ft_lstlen(t_list *lst)
{
	int				i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
