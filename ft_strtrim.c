/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <shamidan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 13:43:19 by shamidan          #+#    #+#             */
/*   Updated: 2019/02/19 13:42:52 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*sc;

	if (!s)
		return (NULL);
	if (!(sc = ft_strdup(s)))
		return (NULL);
	while (*sc == ' ' || *sc == '\n' || *sc == '\t')
		sc++;
	i = ft_strlen(sc) - 1;
	while (sc[i] == ' ' || sc[i] == '\n' || sc[i] == '\t')
		i--;
	sc[++i] = '\0';
	return (ft_strdup(sc));
}
