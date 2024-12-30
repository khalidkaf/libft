/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:22:45 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/24 20:10:43 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = *lst;
	if (!lst || !del)
		return ;
	while (new != NULL)
	{
		tmp = new->next;
		del(new->content);
		free(new);
		new = tmp;
	}
	*lst = NULL;
}
