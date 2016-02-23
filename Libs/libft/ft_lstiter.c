/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 17:50:52 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:12:33 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** apply the fonction f() for each link of the list
*/

#include "libft.h"

void				ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list			*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp)
	{
		f(tmp);
		tmp = tmp->next;
	}
}
