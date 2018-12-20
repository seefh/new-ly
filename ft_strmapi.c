/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:40:58 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/20 14:41:05 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s1;
	char			*s2;
	unsigned int	i;

	i = 0;
	s1 = (char *)s;
	s2 = malloc(sizeof(s1));
	while (s1[i] != '\0')
	{
		s2[i] = f(i, s1[i]);
		i++;
	}
	return (s2);
}
