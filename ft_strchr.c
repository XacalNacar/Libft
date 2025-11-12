/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:56:08 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 10:54:09 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	k;

	i = 0;
	k = (char)c;
	while (s[i])
	{
		if (s[i] == k)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (k == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/*
int	main()
{
	char	n[] = "Plato";
	int	c;

	c = 'l';
	printf ("%s", ft_strchr(n, c));
	return (0);
}*/
