/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:32:37 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 12:20:27 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	k;

	s1 = (unsigned char *)s;
	k = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == k)
		{
			return ((void *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char	s[] = "Comba";
	int	c;

	c = 'b';
	printf("%s", (char *)ft_memchr(s, c, 4));
	return (0);
}*/
