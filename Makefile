# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etina <etina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/02 15:12:05 by etina             #+#    #+#              #
#    Updated: 2024/11/12 11:56:40 by etina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

all: ${NAME}

SRCS = ft_printf.c ft_convert.c ft_putchar.c \
ft_putnbr.c ft_putstr.c ft_putunsign.c ft_strlen.c

OBJECTS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = cc

%.o: %.c libft.h
	${CC} ${FLAGS} -c $< -o $@

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	rm -rf ${OBJECTS}

fclean:	clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re