/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:30:22 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/05 17:30:51 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	if (num < 0)
	{
		i++;
		num = -num;
	}
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*buffer;
	int		len;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 0;
	len = ft_count_digits(n);
	buffer = malloc(sizeof (char) * (len + 1));
	if (!buffer)
		return (NULL);
	if (n < 0)
	{
		buffer[0] = '-';
		sign = 1;
		n = -n;
	}
	buffer[len] = '\0';
	while (len - sign > 0)
	{
		buffer[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (buffer);
}
/*
int	main()
{
	int	m;

	m = 935;
	printf("%s", ft_itoa(m)); 
	return (0);
}
*/
