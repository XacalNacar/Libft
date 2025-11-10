/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:26:25 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 12:03:53 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	k;

	i = 0;
	k = (char)c;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == k)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int	main()
{
	char	n[] = "Palato";
	int	c;

	c = 'a';
	printf ("%s", ft_strrchr(n, c));
	return (0);
}*/
