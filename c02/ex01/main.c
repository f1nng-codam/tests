/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:36:09 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/13 12:56:54 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	ft_contains_null_byte(char *str, int size)
{
	if (str[size] == '\0')
	{
		return (1);
	}
	return (0);
}

void	ft_fill_str(char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		str[i] = 'a';
		i++;
	}
}

void	test_00(void)
{
	char	dest[20];
	char	src[14] = "Hello, world!";
	int		n = 13;

	ft_fill_str(dest, 20);
	ft_strncpy(dest, src, n);
	printf("--- EX01 - Test00\n");
	printf("src: %s\n", src);
	printf("n: %d\n", n);
	printf("dest: %s (should be Hello, world!)\n", dest);
	printf("contains null byte: %d (should be 1)\n", ft_contains_null_byte(dest, n));
}

void	test_01(void)
{
	char	dest[20];
	char	src[7] = "Hello!";
	int		n = 3;

	ft_fill_str(dest, 20);
	ft_strncpy(dest, src, 3);
	printf("--- EX01 - Test01\n");
	printf("src: %s\n", src);
	printf("n: %d\n", n);
	printf("dest: %s (should be Hel)\n", dest);
	printf("contains null byte: %d (should be 1)\n", ft_contains_null_byte(dest, n));
}

int	main(void)
{
	test_00();
	test_01();
}
