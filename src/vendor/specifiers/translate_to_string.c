/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/26 21:24:42 by acapela-         ###   ########.fr       */
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

char	*translate_to_string(t_args *arg, char *fmt, char *value)
{
	// %s
	char *string;

	if (!value)
	{
		string = ft_strdup("(null)");
		return (string);
	}
	else
		string = ft_strdup(value);
	string = put_width(string, arg);
	fmt = ft_str_replace(fmt, arg->argument, string);
	ft_free_ptr((void *) &string);
	return (fmt);
}
