/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <shamidan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 13:52:43 by shamidan          #+#    #+#             */
/*   Updated: 2019/02/19 13:52:55 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t needlen;

	if (*s2 == '\0')
		return ((char *)s1);
	if (!ft_strlen(s2))
		return (NULL);
	needlen = ft_strlen(s2);
	i = 0;
	while (*s1 != '\0' && (i + needlen - 1) < len)
	{
		if (ft_strncmp((char *)s1, (char *)s2, needlen) == 0)
			return ((char *)s1);
		++i;
		++s1;
	}
	return (NULL);
}
