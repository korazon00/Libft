/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faeljedd <faeljedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:35:41 by faeljedd          #+#    #+#             */
/*   Updated: 2025/11/03 15:05:39 by faeljedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_nega(int n)
{
	char	*str;
	int		i;
	int		j;
	char	result[12];

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n = -n;
	i = 0;
	while (n > 0)
	{
		result[i++] = n % 10 + '0';
		n = n / 10;
	}
	result[i] = '\0';
	str = malloc(i + 2);
	if (!str)
		return (NULL);
	str[0] = '-';
	j = 1;
	while (i > 0)
		str[j++] = result[--i];
	str[j] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	j;
	char	result[11];
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	i = 0;
	if (n < 0)
		return (ft_nega(n));
	while (n > 0)
	{
		result[i++] = n % 10 + '0';
		n = n / 10;
	}
	result [i] = '\0';
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (i > 0)
		str[j++] = result[--i];
	str[j] = '\0';
	return (str);
}
