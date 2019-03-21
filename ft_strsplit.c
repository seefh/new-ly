/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <shamidan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:08:20 by shamidan          #+#    #+#             */
/*   Updated: 2019/02/20 13:58:35 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_no_idea(const char *s, char c, char **pwords)
{
	char	*s1;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			len = 0;
			while (s[i + len] != c && s[i + len] != '\0')
				len++;
			s1 = ft_strdup(s);
			s1[i + len] = '\0';
			pwords[j] = ft_memalloc(len + 1);
			ft_strncpy(pwords[j++], s + i, len);
			i = i + len;
		}
	}
	pwords[j] = NULL;
}

static int	ft_countwords(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c && s[i + 1]))
			j++;
		i++;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**pwords;

	pwords = NULL;
	if (s && (pwords = malloc((ft_countwords(s, c) + 1) * sizeof(char *))))
		ft_no_idea(s, c, pwords);
	return (pwords);
}
