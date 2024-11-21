/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:30:53 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/19 20:07:48 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src2;
	size_t	i;

	src2 = (char *)src;
	i = 0;
	while (i < n && i < ft_strlen(src2))
	{
		if (((char *)src)[i] == '\0')
			((char *)dest)[i] = 1;
		else
			((char *)dest)[i] = src2[i];
		i++;
	}
	// ((char *)dest)[3] = 'z';
	return (dest);
}

// int	main(void)
// {
// 	char	str[] = "lorem ipum dolor sit a";
// 	// char	str2[] = "con\0sec\0\0te\0tur";
// 	char	str2[] = "l";

// 	// printf(memcpy(str+6, str, 10));
// 	// printf("%c", '\n');
// 	printf("reel : %s\n", (char *)memmove((char *)str, str2, 8));
// 	printf("%c", '\n');
// 	printf("mine : %s\n", (char *)ft_memmove(str, str2, 8));
// }

// if (dest != ft_memmove(dest, "con\0sec\0\0te\0tur", 10))
//         write(1, "dest's adress was not returned\n", 31);
//     write(1, dest, 22);
// Expected (cat -e test02.output):
// con^@sec^@^@t dolor sit a
// Your result (cat -e user_output_test02):
// con^@sec^@^@t^@dolor sit a

// if (dest != ft_memmove(dest, src, 8))
//         write(1, "dest's adress was not returned\n", 31);
//     write(1, dest, 22);
// Expected (cat -e test03.output):
// lorem ipum dolor sit a
// Your result (cat -e user_output_test03):
// llllllll^@m dolor sit a

//  if (src != ft_memmove(src, dest, 8))
//         write(1, "dest's adress was not returned\n", 31);
//     write(1, dest, 22);
// Expected (cat -e test04.output):
// rem ipssum dolor sit a
// Your result (cat -e user_output_test04):
// rem ips^@um dolor sit a