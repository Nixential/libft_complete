/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnammour <cnammour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 23:29:22 by cnammour          #+#    #+#             */
/*   Updated: 2024/06/16 16:52:14 by cnammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_unsigned_len(unsigned int number)
{
	int	len;

	len = 0;
	if (number == 0)
	{
		return (1);
	}
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

void	ft_putnbr_fd_unsigned(unsigned int n, int fd)
{
	char	c;

	if (n / 10)
	{
		ft_putnbr_fd_unsigned(n / 10, fd);
	}
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

int	ft_print_unsigned(unsigned int number)
{
	ft_putnbr_fd_unsigned(number, 1);
	return (ft_unsigned_len(number));
}
