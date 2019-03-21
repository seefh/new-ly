/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <shamidan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 09:49:16 by shamidan          #+#    #+#             */
/*   Updated: 2019/02/19 13:36:59 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *needle)
{
	int i;
	int k;

	i = 0;
	if (!(*needle))
		return (char*)str;
	while (str[i])
	{
		k = 0;
		while (needle[k] && str[i] == needle[k])
		{
			if (needle[k + 1] == '\0')
				return (char*)str + (i - k);
			i++;
			k++;
		}
		i = i - k;
		i++;
	}
	return (0);
}
