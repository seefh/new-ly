/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 13:43:19 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/19 15:41:12 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_suppr_blank_first(char *s, int i)
{
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1)
{
	int		i;
	int		j;
	int		k;
	char	*s2;
	char	*s;

	s = (char *)s1;
	i = 0;
	j = 0;
	k = ft_strlen(s) - 1;
	i = ft_suppr_blank_first(&s[i], i);
	if (s[i] == '\0')
		return (&s[i]);
	while (s[k] == ' ' || s[k] == '\t' || s[k] == '\n')
		k--;
	if (!(s2 = (char *)malloc(sizeof(char *) * (k - i))))
		return (0);
	j = 0;
	while (i <= k)
		s2[j++] = s[i++];
	s2[j] = '\0';
	return (s2);
}
