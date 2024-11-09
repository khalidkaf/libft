/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:30:53 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/08 17:03:40 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*copier;
	unsigned char	*copier2;
	int				i;

	tmp = dest;
	copier = src;
	copier2 = src;
	i = n;
	while (i--)
	{
		*copier2 = *copier;
		copier++;
		copier2++;
	}
	copier = copier - n;
	while (n--)
	{
		*tmp = *copier;
		tmp++;
		copier++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char str[] = "Hello, world!";
// 	// char str2[] = "ZzZzZzZz!";

// 	printf(memcpy(str+6, str, 10));
// 	printf("%c", '\n');
// 	printf(memmove(str+6, str, 10));
// 	printf("%c", '\n');
// 	printf(ft_memmove(str+6, str, 10));
// }