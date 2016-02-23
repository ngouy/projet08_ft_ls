/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 16:15:33 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:12:15 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** free memory alocated for the link pointed
*/

#include "libft.h"

void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!del || !*alst || !alst)
		return ;
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
