# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaittola <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 10:52:43 by kaittola          #+#    #+#              #
#    Updated: 2021/11/05 12:07:27 by kaittola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c 

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o 

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): compile
	ar rc $(NAME) $(OBJ)

compile:
	gcc -Wall -Wextra -Werror -c -I. $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
