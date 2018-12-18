/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:37:17 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/18 15:51:53 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	if (!(memory = (char*)malloc(size)))
		return (NULL);
	while (i < size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
