/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:08:20 by shamidan          #+#    #+#             */
/*   Updated: 2019/01/02 17:12:51 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include "ft_strlen.c"
//#include <string.h>
#include <stdio.h>
//char    *ft_strncpy(char *s1, const char *s2, size_t n);

int calculer_nbre_mot(char const * s, char c)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[0] != c)
			j = 1;
		if ((s[i] == c && s[i + 1] != c))
			j++;
		i++;
	}	
	printf("[J[%d]]",j);
	printf("[I[%d]]",i);
	return (j);
}

int  *index_mot(char const *s, char c)
{
//trouver index de chaque chaine 

	int	i;
	int	j;
	int *ptr;
	int tab[300];
	int	
	ptr = tab;
	i = 1;
	j = 0;
	while (s[i])
	{
		if (s[0] != c)
		{	
			tab[j]= 0;

		}
		if ((s[i] == c && s[i + 1] != c))
		{		
			tab[j]= i+1;
			j++;
		}	
		i++;
	}
	i=0;
	while (tab[i])
	{
		//printf("{%d}", tab[i]);
		i++;
	}
	return (ptr);
}
//  reucpere la longueur
int  longueur_mots(char const *s, char c, int index)
{
	int	i;

	i = index;
	while (s[i] != c)
	{
		i++;

	}
	return (i - index);
}

char    **ft_strsplit(char const *s, char c)
{
	char	**str;
	int n;
	int i;
	int *ptr;
	int index;

	index = 7;
	ptr =&index;
	index_mot(s, c);	
	printf("{%d}", longueur_mots(s,  c,  index));
	 if ((s == 0) || (c == 0))
		  return (NULL);
	n = calculer_nbre_mot(s, c);
	str= malloc((n+1)*(sizeof(char *)));
	i=0;
	while (i < calculer_nbre_mot(s,c))
	{
		str[i] = malloc((longueur_mot1 +1)*(sizeof(char ) ));	
		ft_strncpy(str[i],mot1,longueur_mot(s, c, i));
		i++;
	}
	/*
	int  longueur_mot1 =5;
	str[i] = malloc((longueur_mot1 +1)*(sizeof(char ) ));
	int  longueur_mot2 =6;
	str[1] = malloc((longueur_mot2 +1)*(sizeof(char ) ));
	int  longueur_mot3 =6;
	str[2] = malloc((longueur_mot3 +1)*(sizeof(char ) ));
	str[n] =NULL;
	char	const *mot1 = s + 1 ;
	char	const *mot2 = s + 7 ;
	char	const *mot3 = s + 14 ;


	ft_strncpy(str[i],mot1,longueur_mot1);
	i++;	
	ft_strncpy(str[i],mot2,longueur_mot2);
	ft_strncpy(str[2],mot3,longueur_mot3);
	//++i;
	
//	printf("[%s]",s);
*/	
	
return (str);
}
