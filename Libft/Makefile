# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etina <etina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 19:41:59 by etina             #+#    #+#              #
#    Updated: 2024/10/29 16:17:09 by etina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: ${NAME}

SRCS = ft_strlen.c ft_isprint.c ft_isdigit.c \
ft_isascii.c ft_isalpha.c ft_isalnum.c ft_toupper.c ft_tolower.c\
ft_strnstr.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memset.c ft_bzero.c \
ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c \
ft_atoi.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_substr.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_putnbr_fd.c ft_strjoin.c\
ft_strtrim.c ft_split.c

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