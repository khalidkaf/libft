/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:26:59 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/21 12:38:53 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	s = s + i;
	while (i + 1)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		i--;
		s--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *str = "hello";
// 	int c = 'h';
// 	printf("%s", ft_strrchr(str, c));
// }