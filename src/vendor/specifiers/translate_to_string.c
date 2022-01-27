/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/27 21:44:51 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

static char	*put_width(char *string, t_args *arg)
{
	char	*width;

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

static char	*put_precision(char *string, t_args *arg)
{
	char	*tmp;

	if (arg->dot && arg->precision > -1)
	{
		tmp = ft_substr(string, 0, arg->precision);
		ft_free_ptr((void **) &string);
		string = tmp;
	}
	if (arg->dot && arg->precision <= 0)
	{
		tmp = ft_strdup("");
		ft_free_ptr((void **) &string);
		string = tmp;
	}
	return (string);
}

// %s
char	*translate_to_string(t_args *arg, char *fmt, char *value)
{
	char	*string;

	if (!value)
	{
		string = ft_strdup("(null)");
		return (string);
	}
	else
		string = ft_strdup(value);
	string = put_precision(string, arg);
	string = put_width(string, arg);
	fmt = ft_str_replace(fmt, arg->argument, string);
	ft_free_ptr((void *) &string);
	return (fmt);
}
