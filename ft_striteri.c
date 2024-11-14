/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:52:27 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/14 20:00:02 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	if (s == NULL || f == NULL)
	{
		return ;
	}
	unsigned int i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}