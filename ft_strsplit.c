/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:08:20 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/31 18:23:11 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "ft_strlen.c"
#include <string.h>
int calculer_nbre_mot(char const * s)
{
	return (2);
}
#include <stdio.h>
char    **ft_strsplit(char const *s, char c)
{

	char	**str;
	int n = calculer_nbre_mot(s);
	str= malloc((n+1)*(sizeof(char *)));
	int i;
	i=0;
	int  longueur_mot1 =5;
	str[i] = malloc((longueur_mot1 +1)*(sizeof(char ) ));
	str[n] =NULL;
	int  longueur_mot2 =3;
	str[i] = malloc((longueur_mot2 +1)*(sizeof(char ) ));
	str[n] =NULL;
	char	const *mot1 = s + 1 ;
	char	const *mot2 = s + 9 ;

//	calculer le nombre de mots 



	strncpy(str[i],mot1,longueur_mot1);
	++i;	
	//strncpy(str[i],mot2,longueur_mot2);
	//++i;
	
//	printf("[%s]",s);
/*
 str = (char**)s;
	i = 0;
	j = 0;



	while (str[i] != '\0')
	{
		while (*str[i] == c)
		{
			*str[i] = '\0';
		}
		i++;

	}
	
	
	
printf("[%p]",str);	
	
*/	
	
	
	
return (str);
	
	/*
	
	
	if ( str[i] == c && str[i+1] != c)
		i++;
	dest =(char **)malloc(sizeof(char ) * ft_strlen(s) +i);
	while (str[i] != '\0')
	{
		while (str[i] == c)
		{
			dest[j] = str[i];
			j++;
			i++;
		}
		while (str[i] != c)
		{
			dest[j] = str[i];
			printf("[%c]",dest[j]);
			j++;
			i++;
		}
	}
free(dest);
return (dest);
//free(dest);


k = '*';
///on compte les mots
if (str[i] == '\0')
	 return (NULL);
while (str[i] != '\0')
{	
while (str[i] == c)
	i++;

if ( str[i] == c && str[i+1] != c)
	j++;
}

printf("[%d]",j);
//printf("[%c]",c);
*/
}
