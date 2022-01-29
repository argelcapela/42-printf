/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_integer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/29 22:10:49 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

static char	*minus(char *string, t_args *arg);

static char	*put_flags(char *string, t_args *arg, int value, int *widpre)
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
	}
	return (string);
}

static char	*put_width(char *string, t_args *arg, int value)
{
	char	*padding;
	char	ch;

	string = minus(string, arg);
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
		padding = ft_chr_to_str(ch, arg->width);
		if (arg->minus && arg->zero == 0)
			string = ft_str_merge(string, padding);
		else
			string = ft_str_merge(padding, string);
	}
	if (arg->negative)
		string = ft_str_merge(ft_strdup("-"), string);
	return (string);
}

static char	*put_precision(char *string, t_args *arg, int value)
{
	char	*padding;

	string = minus(string, arg);
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

static char	*minus(char *string, t_args *arg)
{
	char	*tmp;

	if (*string == '-')
	{
		tmp = ft_substr(string, 1, ft_strlen(string));
		arg->negative = 1;
		ft_free_ptr((void **) &string);
		return (tmp);
	}
	return (string);
}

// %i
char	*translate_to_integer(t_args *arg, char *fmt, int value)
{
	char	*integer;

	integer = ft_itoa(value);
	integer = put_precision(integer, arg, value);
	integer = put_width(integer, arg, value);
	integer = put_flags(integer, arg, value, 0);
	fmt = ft_str_replace(fmt, arg->argument, integer);
	ft_free_ptr((void **) &integer);
	return (fmt);
}
