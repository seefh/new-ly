/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <shamidan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:40:58 by shamidan          #+#    #+#             */
/*   Updated: 2019/02/19 11:29:53 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	i;

	i = 0;
	if (s && f)
	{
		if (!(s1 = ft_strdup(s)))
			return (NULL);
		while (s[i])
		{
			s1[i] = f(i, s[i]);
			i++;
		}
		return (s1);
	}
	return (NULL);
}
