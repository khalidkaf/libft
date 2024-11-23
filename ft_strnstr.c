/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:49:23 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/22 19:52:27 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lenlittle;
	size_t	count;

	lenlittle = ft_strlen(little);
	count = 0;
	if (little == NULL || big == NULL)
		if (len == 0)
			return ((char *)big);
	if (*little == '\0')
		return ((char *)big);
	if (*big == '\0')
		return (NULL);
	while (*big && lenlittle <= len && count < len)
	{
		if (!ft_memcmp(big, little, lenlittle) && !(ft_strlen(little) > len
				- count))
			return ((char *)big);
		if (ft_strlen(little) > (ft_strlen(big)))
		{
			return (NULL);
		}
		big++;
		count++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*bigstr;
// 	char	*littlestr;

// 	bigstr = "aaabcabcd";
// 	littlestr = "cd";
// 	// ft_strnstr(bigstr, littlestr, 15);
// 	printf("ft_ : %s\n", ft_strnstr(bigstr, littlestr, 8));
// }
