/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_decimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/27 21:17:06 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

static char *minus(char *string, t_args *arg);

static char	*put_flags(char *string, t_args *arg, int value)
{
	char *sign;

	if (arg->plus && value > 0)
	{
		sign = ft_chr_to_str('+', 1);
		string = ft_str_merge(sign, string);
	}
	return (string);
}

static char	*put_width(char *string, t_args *arg)
{
	char *padding;
	char ch;

	arg->width -= ft_strlen(string);
	if (arg->width > 0)
	{
		if (arg->zero == 0)
			ch = ' ';
		else
			ch = '0';
		if (arg->plus)
		{
			arg->width-=1;
			string = ft_str_merge(ft_strdup("+"), string);
			arg->plus = 0;
		}
		padding = ft_chr_to_str(ch, arg->width);
		if (arg->minus && arg->zero == 0)
			string = ft_str_merge(string, padding);
		else
			string = ft_str_merge(padding, string);
	}
	return (string);
}


static char	*put_precision(char *string, t_args *arg)
{
	char *padding;

	string = minus(string, arg);
	arg->precision -= ft_strlen(string);
	if (arg->dot && arg->precision > -1)
	{
		if (arg->plus)
		{
			arg->precision-=1;
			string = ft_str_merge(ft_strdup("+"), string);
			arg->plus = 0;
		}
		padding = ft_chr_to_str('0', arg->precision);
		string = ft_str_merge(padding, string);
	}
	if (arg->negative)
		string = ft_str_merge(ft_strdup("-"), string);

	return (string);
}

static char *minus(char *string, t_args *arg)
{
	char *tmp;

	if (*string == '-')
	{
		tmp = ft_substr(string, 1, ft_strlen(string));
		arg->negative = 1;
		ft_free_ptr((void **) &string);
		return (tmp);
	}
	return (string);
}

char	*translate_to_decimal(t_args *arg, char *fmt, int value)
{

	// %d
	char *decimal;

	decimal = ft_itoa(value);
	decimal = put_precision(decimal, arg);
	decimal = put_width(decimal, arg);
	decimal = put_flags(decimal, arg, value);
	fmt = ft_str_replace(fmt, arg->argument, decimal);
	ft_free_ptr((void **) &decimal);
	return (fmt);
}
