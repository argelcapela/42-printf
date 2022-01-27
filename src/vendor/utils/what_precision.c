/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   what_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 04:13:51 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/27 21:35:56 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

void	what_precision(t_args *arg, const char **format, va_list *vl)
{
	if (**format == '.')
	{
		arg->dot = 1;
		*arg->argument++ = *(*format)++;
		if (ft_isdigit(**format))
		{
			arg->precision = 0;
			while (ft_isdigit(**format))
			{
				arg->precision = (arg->precision * 10) + (**format - '0');
				*arg->argument++ = *(*format)++;
			}
		}
		else if (**format == '*')
		{
			arg->precision = va_arg(*vl, int);
			*arg->argument++ = '*';
		}
	}
}
