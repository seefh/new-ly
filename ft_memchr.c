/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 15:55:44 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/10 14:48:31 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	charac;
	size_t			i;

	src = (unsigned char *)s;
	charac = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (src[i] == charac)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
