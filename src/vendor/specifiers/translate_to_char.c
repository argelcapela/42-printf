/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/25 14:40:30 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

/*char	*put_width(char	*str_to_return, t_args *arg)
{

}

char	*put_precision(char	*str_to_return, t_args *arg)
{

}*/

char	*translate_to_char(t_args *arg, char *fmt, int value)
{
	// %c
	char *c;
	char *temp_fmt;

	c = ft_chr_to_str(value);
	temp_fmt = ft_str_replace(fmt, arg->argument, c);
	ft_free_ptr((void *) &c);
	return (temp_fmt);
}
