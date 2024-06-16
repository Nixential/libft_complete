/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnammour <cnammour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 01:07:56 by cnammour          #+#    #+#             */
/*   Updated: 2024/06/10 11:14:42 by cnammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || *lst == NULL)
		return ;
	temp = *lst;
	if (temp->next != NULL)
		ft_lstclear(&(temp->next), del);
	del(temp->content);
	free(temp);
	*lst = NULL;
}
