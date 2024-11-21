/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:16:52 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/21 16:44:48 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	sizenbr(long int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nbr;

	nbr = n;
	len = sizenbr(nbr);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len = len - 1;
	if (nbr == 0)
		str[0] = '0';
	else if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr != 0)
	{
		str[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return (str);
}

// int	main(int argc, char **argv)
// {
// 	printf("itoa : %s", ft_itoa(9));
// 	// ft_itoa(2005);
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