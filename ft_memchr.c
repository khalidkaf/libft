/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:08:22 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/10 18:12:47 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	int				i;

	tmp = s;
	i = 0;
	while (n)
	{
		if (tmp[0] == c)
		{
			return (tmp);
		}
		tmp++;
		n--;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *str = "";
//     int c = 'k';
//     printf("%p\n", ft_memchr(str, c, 10));
//         printf("%p\n", memchr(str, c, 10));

// }