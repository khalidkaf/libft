/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:00:49 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/21 14:38:15 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*str;

	i = start;
	j = 0;
	str = malloc((sizeof(char) * len) + 1);
	if (start > ft_strlen(str))
		return (str);
	if (!s || ft_strlen(s) < start)
		return (NULL);
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
// char *str = "0";
// printf("%s\n", ft_substr(str, 1, 1));
// printf("%s\n", substr(str, 3, 3));
// printf("%p\n", ft_substr(str, 3, 6));
// printf("%p\n", substr(str, 3, 3));
// }