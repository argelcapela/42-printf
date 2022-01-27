/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_pointer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/27 20:45:10 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

static char	*put_width(char *pointer, t_args *arg)
{
	char *width;

	arg->width -= ft_strlen(pointer);
	if (arg->width > 0)
	{
		width = ft_chr_to_str(' ', arg->width);
		if (arg->minus)
			pointer = ft_str_merge(pointer, width);
		else
			pointer = ft_str_merge(width, pointer);
	}
	return (pointer);
}

char	*translate_to_pointer(t_args *arg, char *fmt, unsigned long int value)
{
	// %p
	char *pointer;
	if (!value)
	{
		pointer = ft_strdup("(nil)");
		return (pointer);
	}

	pointer = ft_uitoa_base(value, "0123456789abcdef");
	pointer = ft_str_merge(ft_strdup("0x"), pointer);
	pointer = put_width(pointer, arg);
	fmt = ft_str_replace(fmt, arg->argument, pointer);
	ft_free_ptr((void *) &pointer);

	return (fmt);
}
