/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:13:10 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 12:07:53 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char *)s;
	i = 0;
	while (n != 0)
	{
		s1[i] = 0;
		i++;
		n--;
	}
}
/*
int	main()
{
	char	s1[] = "silo";
	int i = 0;
	ft_bzero(s1, 2);
	while (i < 4)
	{
    	printf("%d ", s1[i]);
    	i++;
	}
	return (0);
}*/
