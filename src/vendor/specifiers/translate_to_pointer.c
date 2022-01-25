/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_pointer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/25 16:07:29 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

/*char	*put_width(char	*str_to_return, t_args *arg)
{

}

char	*put_precision(char	*str_to_return, t_args *arg)
{

}*/

char	*translate_to_pointer(t_args *arg, char *fmt, unsigned long int value)
{
	// %p
	char *pointer;
	char *tmp_pointer;

	pointer = ft_uitoa_base(value, "0123456789abcdef");
	tmp_pointer = ft_strjoin("0x", pointer);
	fmt = ft_str_replace(fmt, arg->argument, tmp_pointer);
	ft_free_ptr((void *) &pointer);
	return (fmt);
}
