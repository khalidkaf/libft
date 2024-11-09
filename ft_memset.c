/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:16:08 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/09 14:09:16 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = s;
	while (n)
	{
		*tmp = (unsigned char)c;
		tmp++;
		n--;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[] = "my test";

// 	printf("%s", ft_memset(str, 65, 4));
// 	printf("%c", '\n');
// 	printf("%p", ft_memset(str, 65, 4));
// 	printf("%c", '\n');
// 	printf("%s", memset(str, 65, 4));
// 	printf("%c", '\n');
// 	printf("%p", memset(str, 65, 4));
// }
