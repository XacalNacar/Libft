/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:11:25 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 13:03:25 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*cl;
	size_t	i;
	size_t	ssize;

	i = 0;
	ssize = size * nmemb;
	if (ssize / size != nmemb)
		return (NULL);
	if (size == 0 || nmemb == 0)
		return (malloc(0));
	cl = malloc(ssize);
	if (cl == NULL)
		return (NULL);
	while (i < ssize)
	{
		cl[i] = 0;
		i++;
	}
	return ((void *)cl);
}
/*
int	main()
{
	int	i;
	char	*cl = (char *)ft_calloc(5, sizeof(char));

	i = 0;
	while (i < 4)
	{
    	printf("%d ", cl[i]);
    	i++;
	}
	free(cl);
	return (0);
}*/
