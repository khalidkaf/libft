/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:05:18 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/10 12:05:19 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (n--)
	{
		if ((s1[i] != s2[i]) || (!s1[i] || !s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
// int	main(int argc, char **argv)
// {
// 	printf("ft_ : %i\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
// 	printf("strncmp : %i", strncmp(argv[1], argv[2], atoi(argv[3])));
// }