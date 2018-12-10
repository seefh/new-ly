/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:49:40 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/07 12:01:18 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*destination;
	char	temp[len];
	size_t	i;

	destination = (char *)dst;
	source = (char *)src;
	i = 0;
	while (i < len)
	{
		{
			temp[i] = source[i];
		}
		i++;
	}
	i = 0;
	while (i < len)
	{
		destination[i] = temp[i];
		i++;
	}
	return (destination);
}
