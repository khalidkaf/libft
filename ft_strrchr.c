/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:26:59 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/09 18:58:17 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = strlen(s) + 1;
    s =s+i;
	while (i)
	{
		if (*s == c)
		{
			return (s);
		}
		i--;
        s--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *str = "hello";
// 	int c = 'e';
// 	ft_strrchr(str, c);
// }