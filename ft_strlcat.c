/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:51:54 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/17 17:50:52 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	sdst;
	size_t	i;

	sdst = ft_strlen(dst);
	i = 0;
	if (siz < ft_strlen(dst))
	{
		return (ft_strlen(dst) + siz);
	}
	while (src[i] && sdst + i + 1 < siz)
	{
		dst[sdst + i] = src[i];
		i++;
	}
	dst[sdst + i] = 0;
	return (1 + ft_strlen(src));
}
// int	main(void)
// {
// 	char str[] = "000000000";
// 	const char *str2 = "1234";
// ft_strlcat(str, str2, 4);
// // printf("%s\n", str);
// // printf("%zu\n", ft_strlcat(str, str2, 4));
// // printf("%s\n", str);
// }