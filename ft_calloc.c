/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:23:23 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/10 19:53:37 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (size != 0)
	{
		if (nmemb * size > 2147483647)
			return (0);
	}
	ptr = (char *)malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

// int	main(void)
// {
// 	printf("ptr : %p\n", ft_calloc(1000000, 1000000));
// 	printf("ptr : %p\n", calloc(1000000, 1000000));
// }