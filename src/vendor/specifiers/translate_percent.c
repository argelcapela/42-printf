/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/27 21:39:31 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

//%%
char	*translate_percent(char *fmt)
{
	char	*percent;

	percent = ft_strdup(PERCENT_PATTERN);
	fmt = ft_str_replace(fmt, "%%", percent);
	ft_free_ptr((void *) &percent);
	return (fmt);
}
