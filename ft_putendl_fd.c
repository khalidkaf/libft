/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:56:39 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/23 13:53:15 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (i < (unsigned int)ft_strlen(s))
	{
		write((unsigned int)fd, &s[i], 1);
		i++;
	}
	write((unsigned int)fd, "\n", 1);
}

// int	main(void)
// {
// 	ft_putendl_fd("kha lid", 1);
// }