/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:44:26 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 13:04:36 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		k;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			k = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (k);
		}
		i++;
	}
	return (0);
}

/*int	main()
{
	char *s1 = "Creta";
	char s2[] = "Cronoa";
	size_t n;

	n = 6;
//	s1[5] = s1[5] + 100;
	printf("%i", ft_strncmp(s1, s2, n));
	return (0);
}*/
