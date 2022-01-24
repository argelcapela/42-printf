/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   understand_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:53:56 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/24 23:34:53 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

char	*understand_type(char type, char *fmt, t_args *arg, va_list *vl)
{
	if(type == '%')
		fmt = translate_percent(fmt);
	else if(type == 'c')
		fmt = translate_to_char(arg, fmt, va_arg(*vl ,char));
	else if(type == 's')
		fmt = translate_to_string(arg, fmt, va_arg(*vl ,char*));
	else if(type == 'p')
		fmt = translate_to_pointer(arg, fmt, va_arg(*vl ,unsigned long int));
	else if(type == 'i')
		fmt = translate_to_integer(arg, fmt, va_arg(*vl , int));
	else if(type == 's')
		fmt = translate_to_decimal(arg, fmt, va_arg(*vl , int));
	else if(type == 'p')
		fmt = translate_to_unsigned_int(arg, fmt, va_arg(*vl ,unsigned int));
	else if(type == 'c')
		fmt = translate_to_hexadecimal(arg, fmt, va_arg(*vl ,unsigned int));
	return (fmt);
}
