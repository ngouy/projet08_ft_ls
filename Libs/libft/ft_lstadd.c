/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 17:26:12 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:06:37 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** add new item at the beginin of the list
*/

#include "libft.h"

void				ft_lstadd(t_list **alst, t_list *new)
{
	if (!new)
		return ;
	if (!alst)
	{
		*alst = new;
		return ;
	}
	new->next = *alst;
	*alst = new;
}
