/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/27 16:25:21 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

static char	*put_width(char *c, t_args *arg)
{
	char *width;

	arg->width -= 1;
	if (arg->width > 0)
	{
		width = ft_chr_to_str(' ', arg->width);
		if (arg->minus)
			c = ft_str_merge(c, width);
		else
			c = ft_str_merge(width, c);
	}
	return (c);
}

char	*translate_to_char(t_args *arg, char *fmt, int value)
{
	// %c
	char *c;
	char *tmp;

	c = ft_chr_to_str(value, 1);
	c = put_width(c, arg);
	tmp = ft_str_replace(fmt, arg->argument, c);
	ft_free_ptr((void *) &c);
	return (tmp);
}
