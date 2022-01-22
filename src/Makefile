# libft
LIBFT_PATH= ./vendor/libs
LIBFT= ${LIBFT_PATH}/libft.a

# printf
NAME= libftprintf.a
SRCS= ${wildcard vendor/utils/*.c } ${wildcard vendor/specifiers/*.c } ft_printf.c
OBJS= ${SRCS:.c=.o}

CC = gcc
RM = rm -f
AR = ar rcs
CFLAGS = -Wall -Werror -Wextra

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			@${AR} ${NAME} ${OBJS} ${LIBFT}

${LIBFT}:
		make -C ${LIBFT_PATH}

all: @${LIBFT}
	 @${NAME}:


clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re

