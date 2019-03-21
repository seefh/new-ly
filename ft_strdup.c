/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <shamidan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 14:07:49 by shamidan          #+#    #+#             */
/*   Updated: 2019/02/21 11:56:07 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*s2;

	s2 = (char *)s1;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s2) + 1));
	if (str)
		return (ft_strcpy(str, s2));
	return (NULL);
}
