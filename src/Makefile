# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 01:45:50 by acapela-          #+#    #+#              #
#    Updated: 2022/02/01 03:44:19 by acapela-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#
#  😈 Printf with Bonus - Makefile 👿
#

# Name of the project
OUTPUT_NAME =   libftprintf.a

# .c files
SRCS =          ft_printf.c                          \
				$(wildcard vendor/base/*.c)         \
				$(wildcard vendor/translators/*.c)

# .h file
HEADER =        ft_printf.h

# .o files
OBJS =          $(SRCS:.c=.o)

# Compiler
CC =            gcc

# Flags
CFLAGS =		-Wall   \
				-Wextra \
				-Werror

# Libft Settings
LIBFT.A =        $(LIBFT_PATH)/libft.a
LIBFT_PATH =     vendor/libft_plusplus

# Create Library
AR =             ar
ARFLAGS =        -rcs

# Remove files
RM =             rm -rf

#
# 🔨Compilation and Linking 🔌
#

# When make is called
all:						$(OUTPUT_NAME)
								@$(MAKE) clean

# When make bonus is called
bonus:					all

# Main libftprintf.a constructor:   \
	1) Compile libft.a\
	2) Compile objects files.o\
	3) Check if header exists\
	4) Use cp to copy libft.a from it path to Makefile's directory with $(OUTPUT_NAME)'name\
	5) AR creates a library called $(OUTPUT_NAME) containing all files.o present in $(OBJS).\
	6) The important detail here is that, $(OUTPUT_NAME) already exist containing the .o libft's files, but the ARFLAGS -r, do the magic, it verify if already exist a library with $(OUTPUT_NAME), if exists, just add the new .o files, so, the printf .o files are added. \
	7) Finally the Library libftprintf.a is complete with printf and libft .o files; 😎
$(OUTPUT_NAME):	$(LIBFT.A) $(OBJS) $(HEADER)
								@cp $(LIBFT.A) $(OUTPUT_NAME)
								@$(AR) $(ARFLAGS) $(OUTPUT_NAME) $(OBJS) $(HEADER)

# Compile or recompile Libft.a library
$(LIBFT.A):
								$(MAKE) re -C $(LIBFT_PATH)

# $(OBJS) directive is called and %.o automatically assume this paper of execute one directive for each object inside $(OBJS);  % get the name until dot(.); So, the same name can be used both as .c files or .o files; the command line then compiles each object; $< represents %.c, so all c files in SRCS, and  $@ = represents all $(OBJS);
%.o: 						%.c $(HEADER)
								$(CC) $(CFLAGS) -c $<	-o $@

# Cleaning .o files
clean:
								$(RM) $(OBJS) *.h.gch

# Cleaning everything
fclean:					clean
								$(RM) $(OUTPUT_NAME)

# Re-making everything
re:							fclean all

# Indicates that:                                                   \
	1) The following targets don't create files with its own names;   \
	2) If some of them create a file with it's own name, they executes regardless it's prerequisite have updates or not; \
Then in few words, .PHONY make these targets avoit problems with file name.
.PHONY:					all bonus clean fclean re
