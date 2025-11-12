/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:08:26 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 15:52:18 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	char	*ml;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1) + ft_strlen(s2) + 1;
	ml = (char *)malloc(sizeof (char) * (len1));
	if (!ml)
		return (NULL);
	ft_strlcpy(ml, s1, len1);
	ft_strlcat(ml, s2, len1);
	return (ml);
}
/*
int	main()
{
	char	*a1; 
	char	*a2;
	char	*frfr;

	a1 = "Hola";
	a2 = "Adios";
	frfr = ft_strjoin(a1, a2);
	printf("%s", frfr);
	free(frfr);
	return (0);
}*/
