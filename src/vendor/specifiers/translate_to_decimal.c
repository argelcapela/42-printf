/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_decimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/26 21:26:33 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

static char	*put_width(char *string, t_args *arg)
{
	char *width;

	arg->width -= ft_strlen(string);
	if (arg->width > 0)
	{
		width = ft_chr_to_str(' ', arg->width);
		if (arg->minus)
			string = ft_str_merge(string, width);
		else
			string = ft_str_merge(width, string);
	}
	return (string);
}

char	*translate_to_decimal(t_args *arg, char *fmt, int value)
{
	// %d
	char *decimal;

	decimal = ft_itoa(value);
	decimal = put_width(decimal, arg);
	fmt = ft_str_replace(fmt, arg->argument, decimal);
	return (fmt);
}
