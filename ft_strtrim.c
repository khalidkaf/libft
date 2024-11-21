/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:26:08 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/21 15:54:43 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trimstart(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (set[j] == s1[i])
				k = 1;
			j++;
		}
		if (k == 0)
			return (i);
		k = 0;
		j = 0;
		i++;
	}
	printf("%i\n", i);
	return (i);
}

static int	trimend(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;

	i = ft_strlen(s1) - 1;
	j = 0;
	k = 0;
	while (i)
	{
		while (set[j])
		{
			if (set[j] == s1[i])
				k = 1;
			j++;
		}
		if (k == 0)
			return (i);
		k = 0;
		j = 0;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	// int		j;
	i = 0;
	start = trimstart(s1, set);
	end = trimend(s1, set);
	str = malloc(sizeof(char) * ((end - start) + 2));
	while (start < end + 1)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}

// int	main(void)
// {
// 	char str1[] = "lorem \n ipsum \t dolor \n sit \t amet";
// 	char str2[] = " ";
// 	printf("%i\n", trimstart(str1, str2));

// 	printf("%i\n", trimend(str1, str2));

// 	// ft_strtrim(str1, str2);
// 	printf("%s\n", ft_strtrim(str1, str2));
// 	printf("%p", ft_strtrim(str1, str2));
// }