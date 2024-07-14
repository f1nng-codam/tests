/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:33:53 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/14 15:39:48 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

void	test_00(void)
{
	char	dest[20] = "Hello";
	char	src[] = ", world!";
	int		size = 20;

	printf("--- EX02 - Test00\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %d\n", size);
	ft_strlcat(dest, src, size);
	printf("result: %s (should be Hello, world!)\n", dest);
}

void	test_01(void)
{
	char	dest[20] = "Hello";
	char	src[] = ", world!";
	int		size = 10;

	printf("--- EX02 - Test01\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %d\n", size);
	ft_strlcat(dest, src, size);
	printf("result: %s (should be Hello, wo)\n", dest);
}

int	main(void)
{
	test_00();
	test_01();
}
