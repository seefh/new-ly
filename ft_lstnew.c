/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <shamidan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 11:57:52 by shamidan          #+#    #+#             */
/*   Updated: 2019/02/21 12:31:07 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *plist;

	plist = malloc(sizeof(t_list));
	if (!plist)
		return (NULL);
	if (content)
	{
		plist->content = malloc(content_size);
		if (!plist->content)
		{
			free(plist);
			return (NULL);
		}
		ft_memcpy(plist->content, content, content_size);
		plist->content_size = content_size;
	}
	else
	{
		plist->content = NULL;
		plist->content_size = 0;
	}
	plist->next = NULL;
	return (plist);
}
