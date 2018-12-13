/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 13:53:53 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/13 13:53:59 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		while (haystack[i] == needle[j])
		{
			j++;
			i++;
		}
		if (j == ft_strlen(needle))
			return ((char *)&haystack[i - j]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
