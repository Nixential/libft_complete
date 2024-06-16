/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnammour <cnammour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 00:46:47 by cnammour          #+#    #+#             */
/*   Updated: 2024/06/10 11:14:23 by cnammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*c_lst;

	c_lst = lst;
	if (lst == NULL)
		return (lst);
	while (c_lst->next != NULL)
		c_lst = c_lst->next;
	return (c_lst);
}
