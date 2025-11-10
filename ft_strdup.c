/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:05:57 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 13:04:06 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	size_t	i;
	size_t	k;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	s1 = (char *)malloc(sizeof (char) * (i + 1));
	if (!s1)
		return (NULL);
	k = 0;
	while (s[k] != '\0')
	{
		s1[k] = s[k];
		k++;
	}
	s1[k] = '\0';
	return (s1);
}

/*int	main()
{	
	char	*sp = "Calcareo";
	char *frfre = ft_strdup(sp);

	free(frfre);
	return(0);
}*/
