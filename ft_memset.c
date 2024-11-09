/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:16:08 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/11/08 11:25:03 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = s;
	while (n)
	{
		*tmp = (unsigned char)c;
		tmp++;
		n--;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[] = "my test";

// 	printf("%s", ft_memset(str, 65, 4));
// 	printf("%c", '\n');
// 	printf("%p", ft_memset(str, 65, 4));
// 	printf("%c", '\n');
// 	printf("%s", memset(str, 65, 4));
// 	printf("%c", '\n');
// 	printf("%p", memset(str, 65, 4));
// }

//  ********************************* fonction ft_memset *********************************
// unsigned char *tmp = s;
// 	printf("c = %d\n", c);
// 	printf("c = %d\n", (unsigned char)c);
// 	while (n)
// 	{
// 		*tmp = c;
// 		tmp++;
// 		n--;
// 	}
// 	return (s);

// ********************************* MAIN *********************************
// // int array[] = {54, 85, 20, 63, 21};
// 	int *array = malloc(sizeof(int) * 4);
// 	for (int i = 0; i < 4; i++) {
// 		array[i] = i;
// 	}
// 	// char array[] = "ceci est un test";
// 	// size_t size = sizeof(int) * 5;
// 	// size_t size = sizeof(char) * 4;
// 	int length;

// 	/* Display the initial values */
// 	// for (length = 0; length < 17; length++)
// 	// {
// 	// 	printf("%d ", array[length]);
// 	// }
// 	// printf("\n");

// 	/* Reset the memory bloc */
// 	// printf("ft_memset = %s\n", (char *)ft_memset(array, 97, 4));
// 	for (int i = 0; i < 4; i++) {
// 		printf("array[%d] = %d\n", i, array[i]);
// 	}
// 	array = ft_memset(array, 65, 100);
// 	printf("size ptr = %zu\n", sizeof(int *));
// 	for (int i = 0; i < 4; i++) {
// 		printf("array[%d] = %d\n", i, array[i]);
// 	}
// 	// printf("memset = %s\n", (int *) memset(array, 300, 4));

// 	/* Display the new values */
// 	// for (length = 0; length < 17; length++)
// 	// {
// 	// 	printf("%d ", array[length]);
// 	// }
// 	// printf("\n");

// 	// return (0);
// 	// char *str = "ceci est un test";
// 	// size_t size = sizeof(char) * 4;
// 	// printf("%s", str);
// 	// memset(str, 65, size);
// 	// printf("%c", '\n');
// 	// printf("%p", memset(str, 65, sizeof(char)*4));