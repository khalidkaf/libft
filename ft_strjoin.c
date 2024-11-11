/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:10:02 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/11 18:21:50 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (!str)
		return (NULL);
	if (!s1 && !s2)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = 0;
	return (str);
}

// int	main(void)
// {
// 	char *str1 = "";
// 	char *str2 = "";
// 	printf("%s\n", ft_strjoin(str1, str2));
// 	printf("%p", ft_strjoin(str1, str2));
// }