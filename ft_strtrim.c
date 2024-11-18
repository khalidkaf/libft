/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:26:08 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/18 11:36:03 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = 0;
	while (s1[i])
	{
		while (set[j] && (s1[i] != set[j]))
		{
			if (j == (int)ft_strlen(set) - 1)
			{
				size++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		k;
	int		i;
	int		j;

	k = 0;
	str = malloc(sizeof(char) * count_len(s1, set) + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (s1[++i])
	{
		j = 0;
		while (set[j] && (s1[i] != set[j]))
		{
			if (j == (int)ft_strlen(set) - 1)
			{
				str[k] = s1[i];
				k++;
			}
			j++;
		}
	}
	return (str);
}

// int	main(void)
// {
// 	char *str1 = "1234 564875 7945";
// 	char *str2 = "57";
// 	ft_strtrim(str1, str2);
// 	printf("%s\n", ft_strtrim(str1, str2));
// 	printf("%p", ft_strtrim(str1, str2));
// }