/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faeljedd <faeljedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:18:53 by faeljedd          #+#    #+#             */
/*   Updated: 2025/10/29 11:00:38 by faeljedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p1;
	const unsigned char	*p2;

	p1 = (unsigned char *)dest;
	p2 = (const unsigned char *) src;
	if (dest == src)
		return (dest);
	i = 0;
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (dest);
}
