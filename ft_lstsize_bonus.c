/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnammour <cnammour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:20:32 by cnammour          #+#    #+#             */
/*   Updated: 2024/06/10 11:14:13 by cnammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;
	t_list	*lst_iter;

	lst_iter = lst;
	size = 0;
	while (lst_iter != NULL)
	{
		size++;
		lst_iter = lst_iter->next;
	}
	return (size);
}
