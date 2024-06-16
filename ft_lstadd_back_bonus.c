/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnammour <cnammour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 00:49:39 by cnammour          #+#    #+#             */
/*   Updated: 2024/06/10 11:14:56 by cnammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*c_lst;

	c_lst = *lst;
	if (*lst == NULL)
		*lst = new;
	if (c_lst == NULL)
	{
		c_lst = new;
		return ;
	}
	while (c_lst->next != NULL)
		c_lst = c_lst->next;
	c_lst->next = new;
}
