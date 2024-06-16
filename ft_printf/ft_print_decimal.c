/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnammour <cnammour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 23:26:27 by cnammour          #+#    #+#             */
/*   Updated: 2024/06/16 16:52:14 by cnammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_number_len(int number)
{
	int	len;

	len = 0;
	if (number <= 0)
		len++;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

int	ft_print_decimal(int number)
{
	ft_putnbr_fd(number, 1);
	return (ft_number_len(number));
}
