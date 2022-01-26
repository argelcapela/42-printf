NAME= libftprintf.a
SRCS= ${wildcard vendor/utils/*.c } ${wildcard vendor/specifiers/*.c } ft_printf.c
OBJS= ${SRCS:.c=.o}
LIBFT= vendor/libs/libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = @ar rcs
RM = rm -f

${NAME}:${OBJS}
		#make re -C vendor/libs
		@${AR} ${NAME} ${OBJS} 1>/dev/null || true
		@clear && gcc -ggdb3 ${CFLAGS}  main.c libftprintf.a vendor/libs/libft.a && ./a.out
		@make clean 1>/dev/null || true
#1>/dev/null || true && ./a.out
all: ${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME} a.out

re:		fclean all

.PHONY:		all clean fclean re
