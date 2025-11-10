/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 10:30:44 by amaymart          #+#    #+#             */
/*   Updated: 2025/11/07 10:30:53 by amaymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_numlen(long tmp)
{
	int	len;

	len = 0;
	while (tmp > 0)
	{
		tmp /= 10;
		len ++;
	}
	return (len);
}

void	ft_fill_buf(char *buffer, long tmp, size_t len, int sign)
{
	int		p;

	if (sign)
		buffer[0] = '-';
	buffer[len + sign] = '\0';
	while (len > 0)
	{
		p = tmp % 10;
		tmp = tmp / 10;
		buffer[len + sign - 1] = p + '0';
		len--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	tmp;
	long	len;
	int		sign;
	char	buffer[12];

	tmp = n;
	len = 0;
	sign = 0;
	if (tmp == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (tmp < 0)
	{
		sign = 1;
		tmp = -tmp;
	}
	len = ft_numlen(tmp);
	ft_fill_buf(buffer, tmp, len, sign);
	write (fd, buffer, len + sign);
}
/*
int	main(void)
{
	int	g;
	int	fd;

	g = INT_MIN;
	fd = 1;
	ft_putnbr_fd(g, fd);
	return (0);
}*/
