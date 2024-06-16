/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnammour <cnammour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 23:30:03 by cnammour          #+#    #+#             */
/*   Updated: 2024/06/16 16:53:55 by cnammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_check_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == '%')
		len = ft_print_percent();
	else if (format == 'c')
		len = ft_print_char(va_arg(args, int));
	else if (format == 'd' || format == 'i')
		len = ft_print_decimal(va_arg(args, int));
	else if (format == 'u')
		len = ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 's')
		len = ft_print_string(va_arg(args, char *));
	else if (format == 'p')
		len = ft_print_pointer(va_arg(args, void *));
	else if (format == 'x')
		len = ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		len = ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	return (len);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		i;
	int		total_length;

	i = 0;
	total_length = 0;
	va_start(args, fmt);
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			total_length += ft_check_format(args, fmt[i + 1]);
			i++;
		}
		else
		{
			ft_putchar_fd(fmt[i], 1);
			total_length++;
		}
		i++;
	}
	va_end(args);
	return (total_length);
}
