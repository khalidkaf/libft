/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:00:49 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/23 12:37:43 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty(void)
{
	char	*str;

	str = malloc(sizeof(char) * 1);
	if (!str)
		return (NULL);
	str[0] = 0;
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*str;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (empty());
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = malloc((sizeof(char) * len) + 1);
	if (!str)
		return (NULL);
	while (s[i] && len)
	{
		str[j] = s[i];
		i++;
		j++;
		len--;
	}
	str[j] = 0;
	return (str);
}

// int	main(void)
// {
// 	char *str = "tripouille";
// 	printf("%s\n", ft_substr(str, 0, 4200));
// 	// printf("%s\n", substr(str, 3, 3));
// 	printf("%p\n", ft_substr(str, 3, 6));
// 	// printf("%p\n", substr(str, 3, 3));
// }