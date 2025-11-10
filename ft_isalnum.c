/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:57:37 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/08 17:17:50 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((65 <= c && 90 >= c) || (97 <= c && 122 >= c) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	int	argl;
	argl = argv [1][0];
	printf ("%d", ft_isalnum(argl));
	return (0);
}*/
