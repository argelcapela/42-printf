/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 03:14:00 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/21 22:16:19 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*---------------------- auxiliary macros -----------------------------  */
# define FD 1

typedef struct s_args
{
	int		negative;
	int		hash;
	int		minus;
	int		plus;
	int		space;
	int		zero;
	int		dot;
	int		precision;
	char	type;
	char	*argument;
}	t_args;

/*---------------------- libs----------------------------------------  */
// ↓ has va_(start, arg, copy, end) - variadic functions
# include <stdarg.h>
# include <unistd.h>
# include "vendor/libs/libft.h"
# include <stdio.h>

/*---------------------specifiers-----------------------------------  */
char	*translate_to_string(char *format, char *value, t_args *args);

/*---------------------utils----------------------------------------  */
void	initialize_struct(t_args *args);
void	destroy_struct(t_args *args);

char	*prepare_to_translation(const char *format, va_list *ap);
char	understand_arg(t_args *args, const char *format, va_list *ap);

int		print_to_fd(const char *fmt_translated, int fd);
/*--------------------- start --------------------------------------  */
int	ft_printf(const char *format, ...);

#endif
