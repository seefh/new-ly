/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:37:17 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/19 16:10:18 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*memory;
	void	*temp;
	size_t	i;

	i = 0;
	temp = malloc(size);
	memory = (char*)temp;
	if (!(memory))
		return (NULL);
	while (i < size)
	{
		memory[i] = 0;
		i++;
	}
	memory[i] = '\0';
	return (memory);
}
