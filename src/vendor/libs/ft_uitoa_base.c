/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:41:09 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/25 16:17:17 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include <stdio.h>

static int	len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len = len + 1;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	convert_base(size_t n, char *str, int *i, char *base)
{
	size_t nb;

	nb = ft_strlen(base);
	if (n > nb && n)
	{
		convert_base(n / nb, str, i, base);
		convert_base(n % nb, str, i, base);
	}
	else
		str[(*i)++] = base[n];
}


char	*ft_uitoa_base(size_t n, char *base)
{
	char	*str;
	int		i;

	str = ft_calloc(len(n) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	convert_base(n, str, &i, base);
	str[i] = '\0';
	return (str);
}

	/*
	if (n == -2147483648)
	{
		str[i++] = '-';
		str[i++] = '2';
		n = 147483648;
	}
	else if (n < 0)
	{
		str[i++] = '-';
		n *= -1;
	}
	*/
