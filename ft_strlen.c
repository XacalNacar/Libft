/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:47:40 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 13:05:46 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int		i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		i++;
		n++;
	}
	return (n);
}
/*
int	main()
{
	const char *s = "Hola";
	
	printf ("%zu", strlen(s));
	return (0);
}*/
