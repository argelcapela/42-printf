/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 03:14:00 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/18 03:51:52 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*
 *	🐱‍💻Welcome to ft_printf Tour with cat hacker!
 *
 *	ft_prinft sintax -> %[flags][width][.precision]specifier
 *
 *	1) ft_printf.c & ft_printf.h
 *	2) ...
 *	3) ...
 *	4) ...
 *	5) ...
 *	6) ...
 *	7) ...
 *	8) ...
 *	9) ...
 *	10) ...
 *
 * 	God Bless You!
 */

/*---------------------- libs----------------------------------------  */
// ↓ has va_(start, arg, copy, end) - variadic functions
# include <stdarg.h>
# include "vendor/libs/libft.h"

/*---------------------specifiers-----------------------------------  */

/*---------------------utils----------------------------------------  */

/*--------------------- start --------------------------------------  */
int	ft_printf(const char *format, ...);

#endif
