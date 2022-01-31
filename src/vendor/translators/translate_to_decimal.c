/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_decimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/31 19:20:39 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

static char	*put_flags(char *string, t_fs_arg *arg, int value, int *widpre)
{
	char	*sign;

	if (arg->plus && value >= 0)
	{
		if (widpre != 0)
			widpre -= 1;
		sign = ft_chr_to_str('+', 1);
		string = ft_str_merge(sign, string);
		arg->plus = 0;
	}
	if (arg->space && value >= 0)
	{
		string = ft_str_merge(ft_strdup(" "), string);
		arg->space = 0;
	}
	return (string);
}

static char	*put_width(char *string, t_fs_arg *arg, int value)
{
	char	ch;

	string = remove_minus(string, arg);
	if (arg->negative)
		arg->width -= 1;
	arg->width -= ft_strlen(string);
	if (arg->width > 0)
	{
		if (arg->zero == 0)
			ch = ' ';
		else
			ch = '0';
		put_flags(string, arg, value, &arg->width);
		if (arg->minus && arg->zero == 0)
			string = ft_str_merge(string, ft_chr_to_str(ch, arg->width));
		else
			string = ft_str_merge(ft_chr_to_str(ch, arg->width), string);
	}
	if (arg->negative)
		string = ft_str_merge(ft_strdup("-"), string);
	return (string);
}

/* remove_minus if the value is negative, holds the minus
sign to be added after*/
/* put_flags add (+) or (just one space, when the flag is specified
with a specific width, the space added is just one)
so this helps to have a join of precision and flags*/
static char	*put_precision(char *string, t_fs_arg *arg, int value)
{
	char	*padding;

	string = remove_minus(string, arg);
	arg->precision -= ft_strlen(string);
	if (arg->dot && arg->precision > 0)
	{
		put_flags(string, arg, value, &arg->precision);
		padding = ft_chr_to_str('0', arg->precision);
		string = ft_str_merge(padding, string);
	}
	if (arg->negative)
		string = ft_str_merge(ft_strdup("-"), string);
	return (string);
}

// %d
char	*translate_to_decimal(t_fs_arg *arg, char *fmt, int value)
{
	char	*decimal;

	decimal = ft_itoa(value);
	decimal = put_precision(decimal, arg, value);
	decimal = put_width(decimal, arg, value);
	decimal = put_flags(decimal, arg, value, 0);
	fmt = ft_str_replace(fmt, arg->argument, decimal);
	ft_free_ptr((void **) &decimal);
	return (fmt);
}
