/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:02:39 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/09 18:24:52 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s)
	{
		printf("ptr : %p\n", s);
		if (s[0] == c)
		{
			printf("ptr : %p\n", s);
			printf("%s\n", s);
			printf("%c\n", c);
			return (s);
		}
		i++;
		s++;
	}
	if (c == 0)
	{
		return (s);
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *str = "khalid";
// 	int i = 1;
// 	ft_strchr(str, i);
// }