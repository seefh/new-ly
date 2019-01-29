/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 16:28:34 by shamidan          #+#    #+#             */
/*   Updated: 2019/01/29 14:32:51 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	char	*str1;
	char	*str2;
	int		i;
	int		j;

	j = 0;
	dest = NULL;
	if (s1 && s2)
	{
		str1 = (char *)s1;
		str2 = (char *)s2;
		dest = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		i = 0;
		while (str1[i])
			dest[j++] = str1[i++];
		j = 0;
		while (str2[j] != '\0')
			dest[i++] = str2[j++];
		dest[i] = '\0';
	}
	return (dest);
}
