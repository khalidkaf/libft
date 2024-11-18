/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:08:25 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/18 11:24:28 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*cpier;

	tmp = dest;
	cpier = (unsigned char *)src;
	while (n--)
	{
		*tmp = *cpier;
		tmp++;
		cpier++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char		str[] = "my test";
// 	const char	*str2 = "this is new";

// 	ft_memcpy(str, str2, 5);
// 	// printf("%s", ft_memset(str, 65, 4));
// 	// printf("%c", '\n');
// 	// printf("%p", ft_memset(str, 65, 4));
// 	// printf("%c", '\n');
// 	// printf("%s", memset(str, 65, 4));
// 	// printf("%c", '\n');
// 	// printf("%p", memset(str, 65, 4));
// }
