/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnammour <cnammour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 01:22:02 by cnammour          #+#    #+#             */
/*   Updated: 2024/06/10 11:11:00 by cnammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;
	size_t	total_size;

	if (size != 0 && nmemb > 2147483647 / size)
		return (NULL);
	total_size = nmemb * size;
	ret = malloc(total_size);
	if (ret == NULL)
		return (NULL);
	ft_bzero(ret, total_size);
	return (ret);
}
