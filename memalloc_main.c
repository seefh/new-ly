#include <string.h>
#include <assert.h>
#include <stdio.h>

//void    ft_bzero(void *b, size_t len);
void    *ft_memalloc(size_t size);
int		main()
{
	
 //char str []="1234567890";
// char str1 []="1234567890";
// char str2 []="k234567890";
 //char str []= "aaa";
 //ft_bzero (str, 3);
 ft_memalloc (10);
//	assert(0 ==  ft_memset (str, p, 1));
	
	printf("[%s]",ft_memalloc( 3));
	return(0);
}
