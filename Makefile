# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shamidan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 10:30:05 by shamidan          #+#    #+#              #
#    Updated: 2018/12/09 19:20:16 by shamidan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(wildcard ./ft_*.c)

HED = ./libft.h

CFLAGS	= -Wall -Wextra -Werror

RM = rm -f

all: generer_o libft.a


generer_o: 
	gcc $(CFLAGS) -c $(SRC) -I $(HED)

libft.a:
	ar rcs libft.a *.o

clean:
	    $(RM) *.o libft.a

fclean: clean
	    $(RM) $(NAME)

re: fclean all
