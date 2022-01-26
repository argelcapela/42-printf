/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/26 20:42:11 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

/*char	*put_width(char	*str_to_return, t_args *arg)
{

}

char	*put_precision(char	*str_to_return, t_args *arg)
{

}*/

char	*translate_to_string(t_args *arg, char *fmt, char *value)
{
	// %s
	//char *string;

	/*if (!value)
	{
		string = ft_strdup("(null)");
		return (NULL);
	}
	else*/
	//string = value;
	fmt = ft_str_replace(fmt, arg->argument, value);
	//ft_free_ptr((void *) &string);
	return (fmt);
}
