/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_to_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:09:38 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/22 02:51:35 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../ft_printf.h"

int	print_to_fd(const char *fmt_translated, int fd)
{
	int bytes_read;

	bytes_read = 0;
	while (*fmt_translated)
	{
		bytes_read += write(fd, fmt_translated, 1);
		fmt_translated++;
	}
	return (bytes_read);
}
