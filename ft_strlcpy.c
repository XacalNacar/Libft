/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:23:01 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 12:06:18 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	return (k);
}
/*
int	main()
{
	char	d[8];
	const char	s[] = "Sastre";

	printf ("%zu", ft_strlcpy(d, s, 8));
	return (0);
}*/
