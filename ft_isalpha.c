/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:47:17 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/02 12:13:17 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((65 <= c && 90 >= c) || (97 <= c && 122 >= c))
		return (1);
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	int	argl;
	argl = argv [1][0];
	printf ("%d", ft_isalpha(argl));
	return (0);
}*/
