/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 11:29:16 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/26 15:12:39 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"




char    *ft_itoa(int n)
{
	char begin[12];
	int	i;
	int p;
	char	*str;
	char  temp;
	
	p=0;
	i = 0;
	if (n < 0)
    {
    //	i++;
          n =n * -1;
    } 
	//if (n==2147483648)
	//	return (NULL); 
	if (n==0)
		return ("0"); 
	if (n == -2147483648)
		return ("-2147483648");

	while (n > 9)
    {
        begin[i] =n % 10+ '0';
        n = n / 10;
         i++;
    }
	begin[i] = n  % 10+ '0';
	if (n <0)
		{
			str =(char*)malloc(sizeof(char)*(i+2));
			str[p] ='-';
			p = p+1;
			i = i+1;
		}	
	else		str =(char*)malloc(sizeof(char)*(i+1));	

 	while (p < i)
	{
        temp = begin[p];
        // printf("le str p  [%c]",  str[p]);
        str[p] = begin[i];
        str[i] = temp;

		p++;
		i--;
	}
str[p] ='\0';
	
return(str);

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*

char    *ft_itoa(int n)
{
	char *dest;
	char *str;
	int i;
	int p;
	char temp;

	str =(char*)malloc(sizeof(char)*20);
	//str[0] ='\0' ;
	p = n;
	i = 0;
	while ((p / 10) > 9)
	{
		str[i] = (p % 10) + '0' ; 
//	printf("le str [%c]",  str[i]);
		p = p / 10;
//		 printf("le p [%d]", p);
		str[i+1] = (p % 10) + '0' ; 
		i++;
		printf("le i [%d]", i);
	}
	//printf("le i [%d]", i);
	str[i+1] = (p/10)+ '0'; 
	//i = p / 10;
	//str[i+2] ='\0';
	i= i+3;
	dest = malloc(sizeof(char)*(i +3));
	 printf("le i [%d]", i);
	p=0;
	 if (n < 0)
	{	
	//	dest[0] = '-';
 	//	p = 1;
	//	i = i+1;
	}
    while (p < i)
    {
        temp = str[p];
        dest[i-p] = str[i -p];
        dest[i] = temp;
  //   printf("le dest [%c]", dest[p]);
        p++;
        i--;
    }
dest[5] ='\0';	
while (p < i)
	{
		temp = str[p];
		// printf("le str p  [%c]",  str[p]);
 		dest[p] = str[i-p];
		dest[i] = temp; 
	// printf("le dest [%c]", dest[p]);
		p++;
	}
 dest[p] = '\0';
*/
	/*	while (p < (str[ft_strlen(str)/2]))
	{
		temp = dest[p];
 		dest[p] = dest[ (str[ft_strlen(str)/2]) - p];
		dest[(str[ft_strlen(str)/2]) - i] = dest[p]; 
		p++;
	return (dest);
}
	*/	
