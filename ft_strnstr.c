/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faeljedd <faeljedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:24:30 by faeljedd          #+#    #+#             */
/*   Updated: 2025/10/29 11:11:42 by faeljedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!src && to_find && len == 0)
		return (NULL);
	if (*to_find == '\0')
		return ((char *)src);
	i = 0;
	while (src[i] && i < len)
	{
		j = 0;
		while (src [i + j] == to_find[j] && (i + j) < len)
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)src + i);
		}
		i++;
	}
	return (NULL);
}
