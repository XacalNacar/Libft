/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:32:38 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 12:21:19 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*b1;
	unsigned char	*b2;
	int				k;
	size_t			i;

	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (b1[i] != b2[i])
		{
			k = (b1[i] - b2[i]);
			return (k);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	a1[] = "Runt";
	char	a2[] = "Russel";

	printf("%i", ft_memcmp(a1, a2, 4));
	return (0);
}*/
