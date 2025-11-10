/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 12:19:57 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 12:08:08 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s1[i] = c;
		i++;
	}
	return (s);
}
/*
int	main()
{
	char	s1[] = "-7643";
	size_t	n;

	n = 0;
	while (s1[n])
	{
		n++;
	}
	
	printf ("%s", (char *)ft_memset(s1, '0', n));
	return (0);
}*/
