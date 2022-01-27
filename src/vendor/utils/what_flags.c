/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   what_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 04:13:51 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/27 21:33:32 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

void	what_flags(t_args *arg, const char **format)
{
	while (1)
	{
		if (*(*format) == '#')
			arg->hash = 1;
		else if (*(*format) == '-')
			arg->minus = 1;
		else if (*(*format) == '+')
			arg->plus = 1;
		else if (*(*format) == ' ')
			arg->space = 1;
		else if (*(*format) == '0')
			arg->zero = 1;
		else
			break ;
		*arg->argument++ = *(*format)++;
	}
}
