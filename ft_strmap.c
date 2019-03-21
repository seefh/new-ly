/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <shamidan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 12:53:06 by shamidan          #+#    #+#             */
/*   Updated: 2019/02/19 11:29:10 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			s1[i] = f(s[i]);
			i++;
		}
		return (s1);
	}
	return (NULL);
}
