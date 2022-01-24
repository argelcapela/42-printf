/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:47:50 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/24 23:07:16 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_replace(char* str, char* search, char* replace)
{
	int i;
	int total;
	char *found;
	char *new;

	if (!str || !search || !replace)
	{
		ft_free_ptr((void *) &str);
		return (0);
	}
	found = ft_strnstr(str, search, ft_strlen(str));
	if (!found)
		return (str);
	total = ft_strlen(str) - ft_strlen(search) + ft_strlen(replace) + 1;
	new = malloc(sizeof(char) * total);
	ft_strlcpy(new, str, (found - str));
	ft_strlcat(new, replace, total);
	i = (found - str) + ft_strlen(search);
	ft_strlcat(new, &str[i], total);
	ft_free_ptr((void *) &str);
	return (new);
}
