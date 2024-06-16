/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnammour <cnammour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 01:29:59 by cnammour          #+#    #+#             */
/*   Updated: 2024/06/10 11:13:23 by cnammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*src_start;

	src_start = src;
	if (size > 0)
	{
		while (--size > 0 && *src != '\0')
		{
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	while (*src++)
		;
	return (src - src_start - 1);
}
