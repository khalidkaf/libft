/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:50:29 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/18 11:19:12 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
//     printf("%zu", ft_strlen(argv[1]));
// }