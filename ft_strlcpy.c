/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:04:37 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/18 11:21:01 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;

	i = 0;
	while (i < siz - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (siz > 0)
	{
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char str[] = "qwer";
// 	const char *str2 = "123456789f";

// 	printf("%s\n", str);
// 	printf("%zu\n", ft_strlcpy(str, str2, 10));
// 	printf("%s\n", str);
// 	// printf("%d", strlcpy(str, str2, 3));
// }