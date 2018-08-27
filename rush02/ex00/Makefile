# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pidecler <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 19:20:25 by pidecler          #+#    #+#              #
#    Updated: 2018/08/18 16:37:01 by pidecler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	 colle-2

SRC		= 	srcs/check_0.c\
			srcs/check_1.c\
			srcs/check_2.c\
			srcs/check_3.c\
			srcs/check_4.c

INCLUDES	= includes/rush.h

all:		$(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) colle-2.o

clean:
	/bin/rm -f colle-2.o

fclean:		clean
	/bin/rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re
