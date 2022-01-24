/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 03:05:43 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/22 06:08:19 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

void	initialize_struct(t_args *arg)
{
	arg->negative = 0;
	arg->hash = 0;
	arg->minus = 0;
	arg->plus = 0;
	arg->space = 0;
	arg->zero = 0;
	arg->dot = 0;
	arg->width = 0;
	arg->precision = -1;
	arg->type = 0;
	arg->argument = NULL;
}
