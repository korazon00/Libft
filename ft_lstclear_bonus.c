/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faeljedd <faeljedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:53:23 by faeljedd          #+#    #+#             */
/*   Updated: 2025/11/01 11:21:52 by faeljedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst || !del)
		return ;
	node = *lst;
	while (*lst != NULL)
	{
		*lst = node->next;
		del(node->content);
		free (node);
		node = *lst;
	}
	*lst = NULL;
}
