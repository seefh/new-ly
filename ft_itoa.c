/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 12:03:54 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/26 15:25:19 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbr_len(int n)
{
	int		i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int		ft_div(int len)
{
	int		i;

	i = 1;
	if (len == 1)
		return (1);
	while (len > 1)
	{
		i = i * 10;
		len--;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		len2;
	char	*result;

	i = 0;
	len = ft_nbr_len(n);
	len2 = len;
	if ((result = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n = n * -1;
		result[0] = '-';
		i++;
		len--;
	}
	while (i < len2)
		result[i++] = ((n / ft_div(len--)) % 10) + 48;
	result[i] = '\0';
	return (result);
}
