/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:08:20 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/24 16:07:36 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.h"
#include "ft_strlen.c"
#include <string.h>
//                                to complte
#include <stdio.h>
char    **ft_strsplit(char const *s)//, char c)
{
//Description Alloue (avec malloc(3)) et retourne un tableau de chaînes de
//caractères “fraiches” (toutes terminées par un ’\0’, le tableau
//également donc) résultant de la découpe de s selon le caractère
//c. Si l’allocation echoue, la fonction retourne NULL. Exemple :
//ft_strsplit("*salut*les***etudiants*", ’*’) renvoie
//le tableau ["salut", "les", "etudiants"].
//Param. #1 La chaîne de caractères à découper.
//Param. #2 Le caractère selon lequel découper la chaîne.
//Retour Le tableau de chaînes de caractères “fraiches” résultant de la
//découpe.
//Fonctions libc malloc(3), free(3)

char	*str;
int len;
int i;
int j;
int k;

str = (char*)s;
len = ft_strlen(str);
str = malloc(sizeof(char *) * len);


i = 0;
j = 0;
//k = ft_atoi(&c);
k = '*';
///on compte les mots

while (str[i] != '\0')
{	
while (str[i] == k)
	i++;

if ( str[i] == k && str[i+1] != k)
	j++;
}

printf("[%d]",j);
//printf("[%c]",c);

return (NULL);

}
