/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:32:40 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/15 11:56:47 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(char *s, char c)
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
	// printf("countwords  : %i\n", j);
	return (j);
}




int	nextword(char *str, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] == c)
	{
		i++;
	}
	while (str[i] != c)
	{
		i++;
		j++;
	}
	printf("nextword  : %i\n", j);
	return (j);
}
int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	// printf("sortie de len : %i\n", i);
	return (i);
}
// char	*mallocaword(char *str)
// {
// 	int		i;
// 	char	*s;

// 	i = 0;
// 	s = malloc(sizeof(char) * (len(str) + 1));
// 	if (s == NULL || !str[0])
// 		return (NULL);
// 	while (str[i])
// 	{
// 		s[i] = str[i];
// 		i++;
// 	}
// 	s[i] = '\0';
// 	return (s);
// }

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;
	char	*str2;

	i = 0;
	if (!s)
		return (NULL);
	tab = malloc(countwords((char *)s, c) + 1 * sizeof(char *));
	str2 = malloc(sizeof(char *) * nextword((char *)s, c) + 1);
	// str2 = malloc(sizeof(char *)*6 + 1);
	if (!tab)
		return (NULL);
	k = 0;
	j = 0;
	if (!str2)
	{
		return (NULL);
	}
	while (i < len((char *)s))
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			str2 = malloc(sizeof(char *) * nextword((char *)s, c) + 1);
			if (!str2)
			{
				// Free memory in case of allocation failure
				while (k > 0)
				{
					free(tab[--k]);
				}
				free(tab);
				return (NULL);
			}
			j = 0;
			while (s[i] != c && s[i] != '\0')
			{
				str2[j++] = s[i++];
			}
			str2[j] = '\0';
			// Add str2 to the result array
			tab[k++] = str2;
		}
		// if (k < countwords((char *)s, c))
		// {
		// 	// printf("combien de mots\n");
		// 	str2 = malloc(sizeof(char *) * nextword((char *)s, c) + 1);
		// 	if (!str2)
		// 	{
		// 		return (NULL);
		// 	}
		// }
		// while (s[i] != c && s[i] != 0)
		// {
		// 	str2[j] = s[i];
		// 	i++;
		// 	j++;
		// }
		// if (j >= len(str2))
		// {
		// 	str2[j] = '\0';
		// 	tab[k] = str2;
		// 	str2 = NULL;
		// 	printf("tab[k] : %s\n", tab[k]);
		// 	j = 0;
		// 	k++;
		// }
		// i++;
		// printf("i : %i\n", i);
	}
	// free(str2);
	tab[k] = NULL;
	printf("tab[0] : %s\n", tab[0]);
	printf("tab[1] : %s\n", tab[1]);
	printf("tab[2] : %s\n", tab[2]);
	printf("tab[3] : %s\n", tab[3]);
	return (tab);
}

int	main(void)
{
	const char	*str = "   khalid kva   kfnwek   dfdvf ";
	const char	c = ' ';

	ft_split(str, c);
	// mallocaword(str);
	// ft_split(str, ' ');
}

/*
1 - parcourir une chaine de caracteres
2 - calculer le nombre de caracteres
3 - calculer le nombre de mots
4 - malloc un tableau pour tout y stocker
5 - malloc mon mot

*/

// char	**ft_split(char const *s, char c)
// {
// 	int		i;
// 	int		j;
// 	int		k;
// 	char	**tab;
// 	char	*str2;

// 	if (!s[0])
// 		return (NULL);
// 	tab = malloc(countwords((char *)s, c) + 1);
// 	str2 = malloc(nextword((char *)s, c) + 1);
// 	// free(str2);
// 	// char *str = (char *)s; // copie de la string d'origine
// 	k = 0;
// 	i = 0;
// 	j = 0;
// 	// tab = "";
// 	while (i < len((char *)s))
// 	{
// 		// if (s[i] != c && (s[i - 1] == c || i == 0))
// 		// {
// 		// 	str2 = malloc(nextword((char *)s, c) + 1);
// 		// }
// 		// if (s[i] == c)
// 		// {
// 		// 	// str++;
// 		// }
// 		if (s[i] != c)
// 		{
// 			str2[j] = s[i];
// 			// str++;
// 			j++;
// 		}
// 		else if (s[i] == c && s[i - 1] != c)
// 		{
// 			str2[j] = '\0';
// 		}
// 		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == 0))
// 		{
// 			j = 0;
// 			tab[k] = str2;
// 			k++;
// 			str2 = malloc(nextword((char *)s, c) + 1);
// 		}
// 		i++;
// 	}
// 	free(str2);
// 	tab[k] = NULL;
// 	printf("tab[0] : %s\n", tab[0]);
// 	printf("tab[1] : %s\n", tab[1]);
// 	printf("tab[2] : %s\n", tab[2]);
// 	printf("tab[3] : %s\n", tab[3]);
// 	return (tab);
// }