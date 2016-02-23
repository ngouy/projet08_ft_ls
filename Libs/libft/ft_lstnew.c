/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 14:56:59 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:16:45 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** create a new link, with a certain allocated memory, set by content_size
*/

#include "libft.h"

t_list				*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*ret;

	if (!content)
		content_size = 0;
	ret = (t_list *)malloc(sizeof(t_list));
	if (!ret)
		return (NULL);
	if (content)
	{
		ret->content = malloc(sizeof(content_size) * content_size);
		ft_memcpy(ret->content, content, content_size);
	}
	else
		ret->content = NULL;
	ret->content_size = content_size;
	ret->next = NULL;
	return (ret);
}
