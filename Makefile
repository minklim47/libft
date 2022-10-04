# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 11:25:36 by climpras          #+#    #+#              #
#    Updated: 2022/10/04 12:02:49 by climpras         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra
NAME = libft.a

#SRCS = $(shell find . -name '*.c')
SRCS =	ft_isalpha.c	\
	ft_isdigit.c	\
	ft_isalnum.c	\
	ft_isascii.c	\
	ft_isprint.c	\
	ft_strlen.c	\
	ft_memset.c	\
	ft_bzero.c	\
	ft_memcpy.c	\
	ft_memmove.c	\
	ft_strlcpy.c	\
	ft_strlcat.c	\
	ft_toupper.c	\
	ft_tolower.c	\
	ft_strchr.c	\
	ft_strncmp.c	\
	ft_memchr.c	\
	ft_memcmp.c	\
	ft_strnstr.c	\
	ft_strrchr.c	\
	ft_atoi.c	\
	ft_calloc.c	\
	ft_strdup.c	\
	ft_substr.c	\
	ft_strjoin.c	\
	ft_strtrim.c	\
	ft_split.c	\
	ft_itoa.c	\
	ft_strmapi.c	\
	ft_striteri.c	\
	ft_putchar_fd.c	\
	ft_putstr_fd.c	\
	ft_putendl_fd.c
	
	
#SRCSB = 

OBJS := $(SRCS:.c=.o)
#OBJSB := $(SRCSB:.c=.o)

all: $(NAME)

%o: %c
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	gcc -nostartfiles -fPIC $(FLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
.PHONY: clean fclean re

