/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 12:49:51 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/07 11:59:17 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	char	*source;
	char	*destination;
	size_t	i;
	char	charac;

	i = 0;
	destination = (char *)d;
	source = (char *)s;
	charac = (char)c;
	while (i < n)
	{
		destination[i] = source[i];
		if (source[i] == charac)
		{
			return (destination + (i + 1));
		}
		i++;
	}
	return (NULL);
}
