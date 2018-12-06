# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shamidan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 10:30:05 by shamidan          #+#    #+#              #
#    Updated: 2018/11/29 17:19:52 by shamidan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.h

SRC = $(wildcard ./ft_*.c)

HED = ./include

CFLAGS	= -Wall -Wextra -Werror

RM = rm -f

all: generer_o libft.a

ft_strlcacct: 
	gcc ft_strlccccat.c strlcat_main.c
	./a.out

ft_strlcat: 
	gcc ft_strlcat.c strlcat_main.c
	./a.out

ft_memchar: 
	gcc ft_memchar.c memchrmain.c
	./a.out

ft_strdup.o: ft_strdup.c
	gcc $(CFLAGS) -c  ft_strdup.c  -I $(HED)


generer_o: 
	gcc $(CFLAGS) -c $(SRC) -I $(HED)

libft.a:
	ar rcs libft.a *.o

clean:
	    $(RM) *.o libft.a

fclean: clean
	    $(RM) $(NAME)

re: fclean all
