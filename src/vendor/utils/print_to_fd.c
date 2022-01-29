/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_to_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:09:38 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/29 17:44:26 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

int	print_to_fd(char *fmt, int fd)
{
	int		bytes_read;

	bytes_read = 0;
	while (*fmt)
	{
		//# Check Tokens && replace them
		if (ft_strnstr(fmt, TOKENIZATION_NULL, 11))
		{
			bytes_read += write(fd,"\0", 1);
			fmt += 11;
			continue;
		}
		if (ft_strnstr(fmt, TOKENIZATION_PERCENT, 11))
		{
			bytes_read += write(fd, "%", 1);
			fmt += 11;
			continue;
		}
		bytes_read += write(fd, fmt, 1);
		fmt++;
	}
	return (bytes_read);
}
