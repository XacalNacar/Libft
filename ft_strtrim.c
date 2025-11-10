/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:53:41 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 16:55:26 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ml;
	size_t	lnt;
	size_t	st;
	size_t	nd;

	if (!s1 || !set)
		return (NULL);
	st = 0;
	while (s1[st] && ft_strchr(set, s1[st]))
		st++;
	nd = ft_strlen(s1);
	while (nd > st && ft_strchr(set, s1[nd - 1]))
		nd--;
	lnt = nd - st;
	ml = (char *)malloc(sizeof(char) * lnt + 1);
	if (!ml)
		return (NULL);
	ft_strlcpy(ml, s1 + st, lnt + 1);
	return (ml);
}
/*
int	main()
{
	char	p1[] = "Sandia verde con pimientos";
	char	se1[] = "Santos";

	printf("%s", ft_strtrim(p1, se1));
	return (0);
}
*/
