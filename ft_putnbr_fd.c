/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:03:19 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/15 11:12:17 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	sizenbr(int n)
// {
// 	int	i;

// 	i = 0;
// 	if (n == 0)
// 	{
// 		// printf("%i", i);
// 		return (i);
// 	}
// 	if (n < 0)
// 	{
// 		i = 1;
// 		n = n * -1;
// 	}
// 	while (n != 0)
// 	{
// 		n = n / 10;
// 		i++;
// 	}
// 	// printf("%i", i);
// 	return (i);
// }

// char	*putnbr(int n)
// {
// 	int		i;
// 	char	str[1];
// printf("modulo %i\n", 6%10);
// 	i = sizenbr(n);
// 	// str = "";
// 	while (i)
// 	{
// 		str[i] = n % 10 + 48;
// 		n = n / 10;
// 		i--;
// 	}
// 	printf("%s", str);
// 	return (str);
// }

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	int		i;

	nbr = n;
	i = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
		ft_putchar_fd(nbr + 48, fd);
}

int	main(void)
{
	ft_putnbr_fd(0, 1);
	// putnbr(6);
}