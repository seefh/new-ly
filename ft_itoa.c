/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 11:29:16 by shamidan          #+#    #+#             */
/*   Updated: 2019/01/01 13:59:18 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	begin[12];
	int		i;
	int		nbr;
	char	*str;

	nbr = n;
	i = 0;
	n < 0 ? n = n * -1 : n;
	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	while (n > 9)
	{
		begin[i++] = n % 10 + '0';
		n = n / 10;
	}
	begin[i] = n + '0';
	n = 0;
	str = (char*)malloc(sizeof(char) * (i + 2));
	nbr < 0 ? str[n++] = '-' : str[n];
	while (0 <= i)
		str[n++] = begin[i--];
	str[n] = '\0';
	return (str);
}
