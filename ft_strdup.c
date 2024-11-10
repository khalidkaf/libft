/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:58:13 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/10 20:21:02 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

int	main(void)
{
	char *str = "khalid";
	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str));
	printf("%p\n", ft_strdup(str));
	printf("%p\n", strdup(str));
}