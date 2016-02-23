/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_strlist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 11:25:23 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:41:35 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Put a list of char as content.
*/

#include "libft.h"

void				ft_put_strlist(t_list *lst)
{
	t_list			*tmp;

	tmp = lst;
	while (tmp)
	{
		ft_putstr((char *)tmp->content);
		ft_putstr("->");
		tmp = tmp->next;
	}
	ft_putstr("null \n");
}
