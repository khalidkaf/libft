/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:51:54 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/21 12:12:15 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (siz == 0)
		return (ft_strlen(src));
	if (siz < ft_strlen(dst))
	{
		return (ft_strlen(src) + siz);
	}
	while (src[j] && i + j + 1 < siz)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (i + ft_strlen(src));
}
// int	main(void)
// {
// 	char str[10] = "00";
// 	const char *str2 = "1234";
// ft_strlcat(str, str2, 4);
// printf("%s\n", str);
// printf("%zu\n", ft_strlcat(str, str2, 4));
// printf("%s\n", str);
// }

// Test 1:
//     dest[11] = 'a';
//     ft_print_result(ft_strlcat(dest, "lorem", 15));
//     write(1, "\n", 1);
//     write(1, dest, 15);
// Expected (cat -e test01.output):
// 11$
// rrrrrrlorem^@^@^@^@
// Your result (cat -e user_output_test01):
// 6$
// rrrrrrlorem^@^@^@^@
// Test 2:
//     ft_print_result(ft_strlcat(dest, "", 15));
//     write(1, "\n", 1);
//     write(1, dest, 15);
// Expected (cat -e test02.output):
// 6$
// rrrrrr^@^@^@^@^@^@^@^@^@
// Your result (cat -e user_output_test02):
// 1$
// rrrrrr^@^@^@^@^@^@^@^@^@
// Test 3:
//     dest[0] = '\0';
//     dest[11] = 'a';
//     ft_print_result(ft_strlcat(dest, "lorem ipsum", 15));
//     write(1, "\n", 1);
//     write(1, dest, 15);
// Expected (cat -e test03.output):
// 11$
// lorem ipsum^@^@^@^@
// Your result (cat -e user_output_test03):
// 12$
// ...