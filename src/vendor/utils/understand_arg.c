/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   understand_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 03:15:49 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/25 13:58:15 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

char	understand_arg(t_args *arg, const char *format, va_list *vl)
{
	char *start_of_str;

	arg->argument = malloc(sizeof(char) * (ft_strlen(format) + 1));
	start_of_str = arg->argument;
	*arg->argument++ = *format++;
	what_flags(arg, &format);
	what_width(arg, &format, vl);
	what_precision(arg, &format, vl);
	*arg->argument = *format;
	arg->type = *format;
	arg->argument = start_of_str;
	return (ft_strlen(arg->argument) - 1);
}
