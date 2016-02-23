/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 10:23:33 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:06:45 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** add new item at the end of the list
*/

#include "libft.h"

void				ft_lstaddend(t_list **alst, t_list *new)
{
	t_list			*tmp;

	if (!new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	tmp = *alst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
