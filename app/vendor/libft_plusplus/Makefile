# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 15:09:39 by acapela-          #+#    #+#              #
#    Updated: 2022/01/26 19:07:09 by acapela-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libft.a
SRCS= ${wildcard *.c}
OBJS= $(SRCS:.c=.o)
CC= clang
CFLAGS= 
LIBFT= ./vendor/libs/libft.a

all: $(NAME)

clean:
	rm -f $(OBJS) $(B_OBJS)

fclean: clean
	rm -f $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean fclean  re bonus rebonus
