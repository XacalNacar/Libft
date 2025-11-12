/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:48:05 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/06 20:49:42 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	f(unsigned int i, char *s)
{
	void(i);
	if (s == 'a')
		s = 'b';
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	k[] = "aaaaaaaaaaaaaaa";
	printf ("%s\n", k);
	ft_striteri(k, f);
	printf ("%s\n", k);
	return (0);
}*/
