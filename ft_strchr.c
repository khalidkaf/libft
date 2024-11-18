/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:02:39 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/18 11:28:00 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s)
	{
		if (s[0] == c)
		{
			return ((char *)s);
		}
		i++;
		s++;
	}
	if (c == 0)
	{
		return ((char *)s);
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *str = "khalid";
// 	int i = 1;
// 	ft_strchr(str, i);
// }
