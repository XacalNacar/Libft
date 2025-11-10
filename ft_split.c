/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:35:54 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/04 10:36:02 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	wor;
	size_t	cnt;

	i = 0;
	wor = 0;
	cnt = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		wor = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i + wor] != c && s[i + wor] != '\0')
			wor++;
		i = i + wor;
		if (wor)
			cnt++;
	}
	return (cnt);
}

char	**ft_free_all(char **array)
{
	int	i;

	i = 0;
	if (!array)
		return (NULL);
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	size_t	nd;
	size_t	slot;

	buffer = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!buffer)
		return (NULL);
	slot = 0;
	while (*s != '\0')
	{
		nd = 0;
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		while (s[nd] != c && s[nd] != '\0')
			nd++;
		buffer[slot] = ft_substr(s, 0, nd);
		if (!buffer[slot])
			return (ft_free_all(buffer));
		slot++;
		s += nd;
	}
	return (buffer[slot] = NULL, buffer);
}
/*
int	main()
{
	char	*strng;
	char	**partstr;
	int	i;

	strng = "Sin,dolor,ni,gloria";
	partstr = ft_split(strng, ',');
	i = 0;
	if (!partstr)
		return (1);
	while (partstr[i])
	{
		printf("%s\n", partstr[i]);
		i++;
	}
	ft_free_all(partstr);
	return (0);
}*/
