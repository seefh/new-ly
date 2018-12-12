/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 11:51:55 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/12 18:39:29 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	d;
	char	*ss;

	ss = (char*)s;
	len = 0;
	d = (char)c;
	while (ss[len])
	{
		len++;
	}
	while (len >= 0 && ss[len] != d)
	{
		if (ss[len] == ss['\0'])
			return (NULL);
		len--;
	}
	return (&ss[len]);
}
