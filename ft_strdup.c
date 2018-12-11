/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 19:18:27 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/11 11:44:54 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*memory;
	char	*s1;
	int		i;

	s1 = (char *)str1;
	i = 0;
	memory = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	while (s1[i])
	{
		memory[i] = s1[i];
		i++;
	}
	memory[i] = '\0';
	return (memory);
}
