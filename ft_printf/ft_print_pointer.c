/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnammour <cnammour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 23:27:37 by cnammour          #+#    #+#             */
/*   Updated: 2024/06/16 16:54:00 by cnammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_print_hex(unsigned long n)
{
	int	count;

	count = 0;
	if (n / 16 > 0)
		count += ft_print_hex(n / 16);
	n = n % 16;
	if (n < 10)
		count += ft_print_char(n + '0');
	else
		count += ft_print_char(n - 10 + 'a');
	return (count);
}

int	ft_print_pointer(void *p)
{
	unsigned long	address;
	int				count;

	address = (unsigned long)p;
	if (p == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		return (ft_strlen("(nil)"));
	}
	count = 0;
	count += ft_print_char('0');
	count += ft_print_char('x');
	count += ft_print_hex(address);
	return (count);
}
