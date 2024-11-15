/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:47:22 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/15 19:46:01 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list = NULL;
	t_list *new_element = NULL;

	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_element = malloc(sizeof(t_list));
		if (new_element == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_element->content = f(lst->content);
		new_element->next = NULL;
		if (new_list == NULL)
		{
			new_list = new_element;
		}
		else
		{
			t_list *temp = new_list;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = new_element;
		}
        lst = lst->next;
        
	}
    return new_list;
}