/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_hexadecimal.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/25 20:55:27 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

/*char	*put_width(char	*str_to_return, t_args *arg)
{

}

char	*put_precision(char	*str_to_return, t_args *arg)
{

}*/

char	*translate_to_hexadecimal(t_args *arg, char *fmt, unsigned int value)
{
	// %x, %X
	char* hexadecimal;
	size_t i;
	size_t len;

	hexadecimal = ft_uitoa_base(value, "0123456789abcdef");
	len = 0;
	len = ft_strlen(hexadecimal);
	if (arg->type == 'X')
	{
		i = 0;
		while (i < len)
		{
				hexadecimal[i] = ft_toupper(hexadecimal[i]);
				i++;
		}
	}
	fmt = ft_str_replace(fmt, arg->argument, hexadecimal);
	return (fmt);
}
