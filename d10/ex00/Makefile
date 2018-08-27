# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tguedes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 18:22:02 by tguedes           #+#    #+#              #
#    Updated: 2018/08/22 00:59:47 by tguedes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
FLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_strcmp.c
OBJS = ft_putchar.o ft_putstr.o ft_strlen.o ft_swap.o ft_strcmp.o

$(NAME):
	@gcc $(FLAGS) -c $(SRCS)
	@ar rc $(NAME).a $(OBJS)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME).a

re: fclean all

all: $(NAME)
