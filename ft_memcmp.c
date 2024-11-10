/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:30:46 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/10 12:41:46 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = s1;
	tmp2 = s2;
	while (n)
	{
		if (tmp1[0] != tmp2[0])
		{
			return (tmp1[0] - tmp2[0]);
		}
		tmp1++;
		tmp2++;
		n--;
	}
	return (0);
}

// int	main(void)
// {
//     char s1[] = {21, 651, 54, 51, 54};
//     char s2[] = {21, 651, 312, 51, 54};
//     printf("ft_ : %i\n", ft_memcmp(s1, s2, 5));
//     printf("mem : %i\n", memcmp(s1, s2, 5));

// }