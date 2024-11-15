/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:32:40 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/15 14:31:52 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(char const *s, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (!s[0])
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			j++;
		i++;
	}
	if (s[i] == 0 && s[i - 1] != c)
		j++;
	return (j);
}

int	len(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char	*mallocaword(char const *str, int start, int end)
{
	int		i;
	char	*s;

	i = 0;
	s = malloc(sizeof(char) * (end - start + 1));
	if (s == NULL || !str[0])
		return (NULL);
	while (start < end)
	{
		s[i] = str[start];
		start++;
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		index;
	char	**tab;

	index = -1;
	i = 0;
	j = 0;
	k = 0;
	tab = malloc(sizeof(char *) * (countwords(s, c) + 1));
	if (!s || !tab)
		return (NULL);
	while (i <= len(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == len(s)) && index >= 0)
		{
			tab[k] = mallocaword(s, index, i);
			k++;
			index = -1;
		}
		i++;
	}
	tab[k] = NULL;
	// printf("tab[0] : %s\n", tab[0]);
	// printf("tab[1] : %s\n", tab[1]);
	// printf("tab[2] : %s\n", tab[2]);
	// printf("tab[3] : %s\n", tab[3]);
	return (tab);
}

int	main(void)
{
	const char	*str = "khalid ";
	const char	c = ' ';

	ft_split(str, c);
	// mallocaword(str);
	// ft_split(str, ' ');
}
