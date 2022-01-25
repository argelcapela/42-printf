/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_integer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/25 15:56:40 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

/*char	*put_width(char	*str_to_return, t_args *arg)
{

}

char	*put_precision(char	*str_to_return, t_args *arg)
{

}*/

char	*translate_to_integer(t_args *arg, char *fmt, int value)
{
	// %i
	char *integer;

	integer = ft_itoa(value);
	fmt = ft_str_replace(fmt, arg->argument, integer);
	return (fmt);
}
