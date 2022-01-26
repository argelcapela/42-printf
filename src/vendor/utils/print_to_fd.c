/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_to_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:09:38 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/26 17:51:42 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../ft_printf.h"

int	print_to_fd(const char *fmt, int fd)
{
	char *tokenization;
	int bytes_read;
	// check patterns
	tokenization = ft_str_replace((char *)fmt, PERCENT_PATTERN, "%");
	fmt = (const char *) tokenization;
	//fmt = ft_str_replace((char *)fmt, NULL_PATTERN, "");

	bytes_read = 0;
	while (*fmt)
	{
		bytes_read += write(fd, fmt, 1);
		fmt++;
	}
	return (bytes_read);
}
