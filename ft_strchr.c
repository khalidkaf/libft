/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:02:39 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/13 19:10:05 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s)
	{
		if (s[0] == c)
		{
			return (s);
		}
		i++;
		s++;
	}
	if (c == 0)
	{
		return (s);
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *str = "khalid";
// 	int i = 1;
// 	ft_strchr(str, i);
// }



char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;
	char	*str2;

	if (!s[0])
		return (NULL);
	tab = malloc(countwords((char *)s, c) + 1);
	str2 = malloc(nextword((char *)s, c) + 1);
	free(str2);
	char *str = (char *)s; // copie de la string d'origine
	k = 0;
	i = 0;
	j = 0;
	while (i < len((char *)s))
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
		{
			str2 = malloc(nextword((char *)s, c) + 1);
		}
		if (s[i] == c)
		{
			str++;
		}
		else if (s[i] != c)
		{
			str2[j] = s[i];
			str++;
			j++;
		}
		else if (s[i] == c && s[i - 1] != c)
		{
			str2[j] = 0;
		}
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == 0))
		{
			j = 0;
			tab[k] = str2;
			k++;
		}
		i++;
	}
	free(str2);
	tab[k] = NULL;
	return (tab);
}