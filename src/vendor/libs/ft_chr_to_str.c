/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chr_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:25:31 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/26 19:45:47 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_chr_to_str(char c, size_t qtd)
{
	char *str;

	if (!c)
		return (NULL);
	str = malloc(sizeof(char) * qtd);
	if (!str)
		return (NULL);
	ft_memset(str, c, qtd);
	return (str);
}
