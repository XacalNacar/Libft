/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:59:13 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 12:22:33 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	j;
	size_t	og_len;

	j = 0;
	i = 0;
	k = ft_strlen(src);
	og_len = ft_strlen(dst);
	if (size > og_len)
	{
		j = og_len;
		while (src[i] != '\0' && j < size - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
		j = og_len;
	}
	else
		j = size;
	return (k + j);
}
/*
int	main()
{
	char	d[9] = "Lodo";
	const char	s[] = "Sastre";

	printf ("%zu\n%s\n", ft_strlcat(d, s, 8), d);
	return (0);
}*/
