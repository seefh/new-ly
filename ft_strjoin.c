/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 16:28:34 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/20 17:04:27 by shamidan         ###   ########.fr       */
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

	str1 = (char *)s1;
	str2 = (char *)s2;
	dest = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	while (str1[i] != '\0')
	{
		dest[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
	{
		dest[i] = str2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
