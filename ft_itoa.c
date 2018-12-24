
///not complete
#include "libft.h"

char    *ft_itoa(int n)
{
	char *dest;
	char str[20];
	int i;
	int p;
	char temp;

	p = n;
	i = 0;
	while (p / 10 > 9)
	{
		p = p / 10;
		str[i] = (p % 10) + '0' ; 
		i++;
	}
	str[i] = p+ '0'; 
	str[i+1] ='\0';
	dest = malloc((i));
  	i=0;
	if (n < 0)
	{	
		dest[0] = '-';
 		i = 1;
	}
	while (i < (str[ft_strlen(str)/2]))
	{
		temp = dest[i];
 		dest[i] = dest[ (str[ft_strlen(str)/2]) - i];
		dest[(str[ft_strlen(str)/2]) - i] = dest[i]; 
		i++;
	}	
	return (dest);
}
