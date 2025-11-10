/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:26:43 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/06 19:27:52 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	f(unsigned int i, char c)
{
	(void)i;
	if (c == 'a')
	{
		c = 'b';
	}
	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*devmap;
	int		i;

	i = 0;
	devmap = malloc((ft_strlen(s) + 1) * sizeof (char));
	if (!devmap)
		return (NULL);
	while (s[i] != '\0')
	{
		devmap[i] = (*f)(i, s[i]);
		i++;
	}
	devmap[i] = '\0';
	return (devmap);
}
/*
int	main()
{
	char	*k;

	k = "aaaaaaaaaa";
	printf ("%s", ft_strmapi(k, f));
	return(0);
}*/
