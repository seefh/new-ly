/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 11:29:16 by shamidan          #+#    #+#             */
/*   Updated: 2019/01/29 14:00:14 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_count(int n)
{
	int				i;
	int				v;
	unsigned int	nb;
	char			*tab;

	v = 1;
	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	nb = n;
	while (nb / v >= 10)
	{
		v = v * 10;
		i++;
	}
	if (!(tab = (char*)malloc(sizeof(*tab) * i + 1)))
		return (0);
	return (tab);
}

char				*ft_itoa(int n)
{
	int				v;
	unsigned int	nb;
	int				i;
	char			*tab;

	if (!(tab = ft_count(n)))
		return (0);
	v = 1;
	if (n < 0)
		nb = -n;
	else
		nb = n;
	while (nb / v >= 10)
		v = v * 10;
	i = 0;
	if (n < 0)
		tab[i++] = '-';
	while (v >= 1)
	{
		tab[i++] = (nb / v) + '0';
		nb = nb % v;
		v = v / 10;
	}
	tab[i] = '\0';
	return (tab);
}
