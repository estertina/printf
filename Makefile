# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etina <etina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/02 15:12:05 by etina             #+#    #+#              #
#    Updated: 2024/11/07 15:34:33 by etina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT_DIR = ./Libft
LIBFT = $(LIBFT_DIR)/libft.a
all: $(LIBFT) ${NAME}

SRCS = 	ft_printf.c \
		ft_convert.c

OBJECTS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = cc

%.o: %.c libft.h
	${CC} ${FLAGS} -c $< -o $@

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(LIBFT):
	cd $(LIBFT_DIR) && make

clean:
	rm -rf ${OBJECTS}
	cd $(LIBFT_DIR) && make clean

fclean:	clean
	rm -rf ${NAME}
	cd $(LIBFT_DIR) && make fclean

re: fclean all

.PHONY: all clean fclean re