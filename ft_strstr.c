/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 13:53:53 by shamidan          #+#    #+#             */
/*   Updated: 2019/01/29 14:03:47 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*src;
	char	*find;
	size_t	size;

	src = (char *)haystack;
	find = (char *)needle;
	size = ft_strlen(find);
	if (size == 0)
		return (src);
	while (*src)
	{
		if (ft_strncmp(src, find, size) == 0)
			return (src);
		src++;
	}
	return ((char *)NULL);
}
