/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnammour <cnammour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 23:57:40 by cnammour          #+#    #+#             */
/*   Updated: 2024/06/10 11:14:10 by cnammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		uc;
	size_t				i;

	i = 0;
	uc = (unsigned char)c;
	p = (const unsigned char *)s;
	while (i < n)
	{
		if (p[i] == uc)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}
