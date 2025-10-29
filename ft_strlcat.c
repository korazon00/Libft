/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faeljedd <faeljedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:42:17 by faeljedd          #+#    #+#             */
/*   Updated: 2025/10/29 10:34:06 by faeljedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ldest;
	size_t	lsrc;

	lsrc = ft_strlen(src);
	if (!dest && size == 0)
		return (lsrc);
	ldest = ft_strlen((const char *)dest);
	if (size <= ldest)
		return (lsrc + size);
	i = 0;
	while (src[i] && (ldest + i + 1) < size)
	{
		dest[ldest + i] = src[i];
		i++;
	}
	dest[ldest + i] = '\0';
	return (lsrc + ldest);
}
