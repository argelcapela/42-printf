/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_merge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:39:46 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/26 20:37:56 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_merge(char *s1, char *s2)
{
	char *new;
	size_t total;

	if (!s1 || !s2)
	{
		ft_free_ptr((void *) &s1);
		ft_free_ptr((void *) &s2);
		return (NULL);
	}
	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = malloc(sizeof(char) * total);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, ft_strlen(s1) + 1);
	ft_strlcat(new, s2, total);
	ft_free_ptr((void *) &s1);
	ft_free_ptr((void *) &s2);
	return (new);
}