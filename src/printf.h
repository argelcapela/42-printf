/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 03:14:00 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/18 03:31:01 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 * prinft sintax -> %[flags][width][.precision]specifier
 *
 */
#ifndef FT_PRINT_F
# define FT_PRINT_F

/** libs  **/
//↓↓ has va_(start, arg, copy, end) - variadic functions
#include <stdarg.h>
#include "vendor/libs/libft.h"

/** specifiers  **/

/** utils  **/

/** start  **/
int ft_printf(const char *format, ...);

#endif



