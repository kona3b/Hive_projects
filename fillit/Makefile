# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jniemine <jniemine@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 13:06:54 by jniemine          #+#    #+#              #
#    Updated: 2022/02/18 10:44:20 by jniemine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CFLAG = -Wall -Wextra -Werror

INCLUDES = -I./ -I./libft/includes/

SRCS =	fillit.c			\
		libft/ft_putchar.c	\
		libft/ft_putstr.c	\
		libft/ft_putnbr.c	\
		libft/ft_memalloc.c	\
		libft/ft_bzero.c	\
		libft/ft_memset.c	\
		libft/ft_memcpy.c	\

OBJ =	libft/ft_putchar.o	\
		libft/ft_putstr.o	\
		libft/ft_putnbr.o	\
		libft/ft_memalloc.o	\
		libft/ft_bzero.o	\
		libft/ft_memset.o	\
		libft/ft_memcpy.o	\

all:
	gcc ${CFLAG} ${SRCS} ${INCLUDES} -o ${NAME} 
