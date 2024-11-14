/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:16:52 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/14 18:06:23 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sizenbr(long int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	if (n == 0)
		return (1);
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	printf("%i\n", i);
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;

	nbr = n;
	len = sizenbr(nbr);
	str = malloc(sizeof(char) * len + 2);
	if (str == NULL)
		return (NULL);
	str[len + 1] = '\0';
	len = len;
	if (nbr == 0)
		str[0] = '0';
	else if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		str[len--] = (nbr % 10 + '0');
		nbr = nbr / 10;
	}
	return (str);
}

// int	main(int argc, char **argv)
// {
// printf("%s", ft_itoa(0));
// ft_itoa(2005);
// }

// char	*ft_itoa(int n)
// {
// 	char	*str;
// 	int		i;

// 	str = malloc(sizeof(char) *1);
// 	i = 0;
// 	while (i<1)
// 	{
// 		str[i] = n + 48;
// 		i++;
// 	}
// 	return (str);
// }