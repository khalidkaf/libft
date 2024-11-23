/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:26:08 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/23 12:32:48 by kkafmagh         ###   ########.fr       */
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

static char	*empty(void)
{
	char	*str;

	str = malloc(sizeof(char) * 1);
	if (!str)
		return (NULL);
	str[0] = 0;
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	i = 0;
	start = trimstart(s1, set);
	end = trimend(s1, set);
	if (start > end)
	{
		return (empty());
	}
	str = malloc(sizeof(char) * ((end - start) + 2));
	if (!str)
		return (NULL);
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
// 	char str1[] = "                       ";
// 	char str2[] = " ";
// 	// printf("%i\n", trimstart(str1, str2));

// 	// printf("%i\n", trimend(str1, str2));

// 	// ft_strtrim(str1, str2);
// 	printf("---%s---\n", ft_strtrim(str1, str2));
// 	// printf("%p", ft_strtrim(str1, str2));
// }