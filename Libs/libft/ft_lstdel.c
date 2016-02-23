/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 16:59:23 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:07:19 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** free memory alocated for the entire list
*/

#include "libft.h"

void				ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list			*list;

	list = *alst;
	if (!alst || !del)
		return ;
	while (list)
	{
		(*alst) = (*alst)->next;
		ft_lstdelone(&list, del);
		list = *alst;
	}
}
