# Library final name requested by the mandatory
NAME= libftprintf.a

CC = clang

CFLAGS = -Wall -Wextra -Werror

# Library Creator
AR = ar rcs

SRCS= ft_printf.c $(wildcard vendor/utils/*.c ) $(wildcard vendor/specifiers/*.c )

# Short command to compile using $(CC) and $(CFLAGS) to all *.c files in $(SRCS)
OBJS= $(SRCS:.c=.o)

# 1 - After compile any c file to .o file
# 2 - Make re libft library
# 3 - Create libftprintf.a library
$(NAME): $(OBJS)
		$(MAKE) re -C vendor/libs
		$(AR) $(NAME) $(OBJS)
		clear
		@echo "Success!"

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME) a.out

re:		fclean all

.PHONY:		all clean fclean re
