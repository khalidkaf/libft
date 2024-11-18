/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:49:23 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/18 11:34:00 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	unsigned char	*tmp1;
// 	unsigned char	*tmp2;

// 	tmp1 = s1;
// 	tmp2 = s2;
// 	while (n)
// 	{
// 		if (tmp1[0] != tmp2[0])
// 		{
// 			return (tmp1[0] - tmp2[0]);
// 		}
// 		tmp1++;
// 		tmp2++;
// 		n--;
// 	}
// 	return (0);
// }

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lenlittle;

	lenlittle = ft_len(little);
	if (little == NULL || big == NULL)
		if (len == 0)
			return ((char *)big);
	if (*little == '\0')
		return ((char *)big);
	if (*big == '\0')
		return (NULL);
	while (*big && lenlittle <= len)
	{
		if (!ft_memcmp(big, little, lenlittle))
			return ((char *)big);
		big++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*bigstr;
// 	char	*littlestr;

// 	bigstr = "khalid e s es est la";
// 	littlestr = "est";
// 	ft_strnstr(bigstr, littlestr, 3);
// 	printf("ft_ : %s\n", ft_strnstr(bigstr, littlestr, 3));
// }
