/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <shamidan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:50:45 by shamidan          #+#    #+#             */
/*   Updated: 2019/02/19 13:21:35 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	i = 0;
	if (s)
	{
		if (!(s1 = (char*)malloc(sizeof(*s1) * len + 1)))
			return (0);
		len = start + len;
		while (start < len)
		{
			s1[i] = s[start];
			start++;
			i++;
		}
		s1[i] = '\0';
		return (s1);
	}
	return (0);
}
