# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llenotre <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 12:10:59 by llenotre          #+#    #+#              #
#    Updated: 2018/08/22 00:00:28 by llenotre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
COMPILER = gcc
FLAGS = -Wall -Wextra -Werror

SRCS = srcs/main.c srcs/map.c srcs/util.c srcs/input.c srcs/check.c

$(NAME):
	@gcc $(FLAGS) -o $(NAME) $(SRCS)

clean:

fclean: clean
	@rm -rf $(NAME)

all: $(NAME)

re: fclean all
