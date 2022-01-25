/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_to_translation.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 03:00:24 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/25 13:59:47 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

char	*prepare_to_translation(const char *format, va_list *vl)
{
	char *fmt;
	t_args arg;

	fmt = ft_strdup(format);
	while (*format)
	{
		if (*format == '%')
		{
			initialize_struct(&arg);
			format += understand_arg(&arg, format, vl);
			fmt = understand_type(*format, fmt, &arg, vl);
			destroy_struct(&arg);
		}
		format++;
	}
	return (fmt);
}
