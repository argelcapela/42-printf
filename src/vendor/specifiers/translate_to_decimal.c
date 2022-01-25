/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_decimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/25 20:34:12 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

/*char	*put_width(char	*str_to_return, t_args *arg)
{

}

char	*put_precision(char	*str_to_return, t_args *arg)
{

}*/

char	*translate_to_decimal(t_args *arg, char *fmt, int value)
{
	// %d
	char *decimal;

	decimal = ft_itoa(value);
	fmt = ft_str_replace(fmt, arg->argument, decimal);
	return (fmt);
}
