/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnammour <cnammour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:20:20 by cnammour          #+#    #+#             */
/*   Updated: 2024/06/10 11:13:06 by cnammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	cc;

	str = (char *)s;
	cc = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == cc)
		{
			str = (char *)&s[i];
			return (str);
		}
		i--;
	}
	return (NULL);
}
