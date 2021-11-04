# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaittola <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 10:52:43 by kaittola          #+#    #+#              #
#    Updated: 2021/11/04 13:30:38 by kaittola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c ft_putchar.c ft_putstr.c

OBJ = main.o ft_putchar.o ft_putstr.o

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -Wall -Wextra -Werror -I. $(OBJ) -o $(NAME)
	chmod 755 $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
