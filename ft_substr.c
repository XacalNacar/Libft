/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 23:42:38 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 12:50:45 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;
	size_t	j;
	size_t	s_len;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len == 0 || start >= s_len)
		return (ft_calloc(1, 1));
	if (start + len > s_len)
		len = s_len - start;
	s1 = (char *)malloc(sizeof (char) * (len + 1));
	if (!s1)
		return (NULL);
	while (j < len && s[i] != '\0')
	{
		s1[j] = s[i];
		i++;
		j++;
	}
	s1[j] = '\0';
	return (s1);
}
/*
int	main()
{
	char	*fs = "Copiaaqui";
	size_t	st;
	size_t	l;

	st = 5;
	l = 3;
	char	*res = ft_substr(fs, st, l);
	printf("%s", res);
	free (res);
	return (0);
}*/
