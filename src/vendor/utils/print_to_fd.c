/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_to_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:09:38 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/24 23:21:57 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../ft_printf.h"

int	print_to_fd(const char *fmt, int fd)
{
	int bytes_read;

	bytes_read = 0;
	while (*fmt)
	{
		bytes_read += write(fd, fmt, 1);
		fmt++;
	}
	return (bytes_read);
}
