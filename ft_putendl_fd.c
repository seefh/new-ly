/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 18:29:10 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/17 18:36:58 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int		i;
	char	*c;

	c = (char*)s;
	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar_fd(c[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
