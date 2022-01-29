/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 03:14:00 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/29 22:20:02 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*---------------------- libs----------------------------------------  */
// ↓ has va_(start, arg, copy, end) - variadic functions
# include <stdarg.h>
# include <unistd.h>
# include "vendor/libs/libft.h"

/*---------------------- auxiliary vars -----------------------------  */
typedef struct s_args
{
	int		negative;
	int		hash;
	int		minus;
	int		plus;
	int		space;
	int		zero;
	int		dot;
	int		width;
	int		precision;
	char	type;
	char	*argument;
}	t_args;

# define FD 1
# define TOKENIZATION_NULL    "___BANANA0_"
# define TOKENIZATION_PERCENT "___BANANA1_"
/*---------------------specifiers-----------------------------------  */
// %%
char	*translate_percent(char *fmt);

// %c
char	*translate_to_char(t_args *arg, char *fmt, int value);

// %s
char	*translate_to_string(t_args *arg, char *fmt, char *value);

// %p
char	*translate_to_pointer(t_args *arg, char *fmt, unsigned long int value);

// %i
char	*translate_to_integer(t_args *arg, char *fmt, int value);

// %d
char	*translate_to_decimal(t_args *arg, char *fmt, int value);

// %u
char	*translate_to_unsigned_int(t_args *arg, char *fmt, unsigned int value);

// %x,%X
char	*translate_to_hexadecimal(t_args *arg, char *fmt, size_t value);

/*---------------------utils----------------------------------------  */
void	initialize_struct(t_args *arg);
void	destroy_struct(t_args *arg);

// Running format and filling struct with flags, width and precision;
char	*prepare_to_translation(const char *format, va_list *vl);
char	understand_arg(t_args *arg, const char *format, va_list *vl);
char	*understand_type(char type, char *fmt, t_args *arg, va_list *vl);
void	what_flags(t_args *arg, const char **format);
void	what_width(t_args *arg, const char **format, va_list *vl);
void	what_precision(t_args *arg, const char **format, va_list *vl);

// Display final result into FD
int		print_to_fd(char *fmt, int fd);

/*--------------------- start --------------------------------------  */
int		ft_printf(const char *format, ...);

#endif
