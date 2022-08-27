# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: climpras <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 11:25:36 by climpras          #+#    #+#              #
#    Updated: 2022/08/28 02:03:13 by climpras         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra
NAME = libft.a

#SRCS = $(shell find . -name '*.c')
SRCS =  ft_isalpha.c	\
	ft_isdigit.c	\
	ft_isalnum.c	\
	ft_isascii.c	\
	ft_isprint.c	\
	ft_strlen.c	\
	ft_memset.c	\
	ft_bzero.c	\
	ft_memcpy.c	\
	ft_toupper.c	\
	ft_tolower.c	\
	ft_strchr.c	\
	ft_strncmp.c	\
	ft_memchr.c	\
	ft_memcmp.c	\
	ft_strrchr.c	\
	ft_atoi.c	
	
	
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


