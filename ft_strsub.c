/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:50:45 by shamidan          #+#    #+#             */
/*   Updated: 2019/01/29 14:37:50 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*dest;
	size_t	i;
	size_t	j;

	dest = NULL;
	if (s && start)
	{
		str = (char *)s;
		dest = malloc((*str) * len + start);
		i = 0;
		j = start;
		while (j < len + start)
		{
			dest[i] = str[j];
			i++;
			j++;
		}
		return (dest);
	}
	return (dest);
}
