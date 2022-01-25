/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_unsigned_int.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/25 20:20:21 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

/*char	*put_width(char	*str_to_return, t_args *arg)
{

}

char	*put_precision(char	*str_to_return, t_args *arg)
{

}*/

char	*translate_to_unsigned_int(t_args *arg, char *fmt, unsigned int value)
{
	// %u
	char *u_int;

	u_int = ft_itoa(value);
	fmt = ft_str_replace(fmt, arg->argument, u_int);
	return (fmt);
}
