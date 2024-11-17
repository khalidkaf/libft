/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:00:56 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/15 19:53:32 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;

	tmp = s;
	while (n--)
	{
		*tmp = 0;
		tmp++;
	}
}

// int	main(void)
// {
// 	char	str[] = "my test";

// 	ft_bzero(str, 3);
// }
