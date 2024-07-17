/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qvan-der <qvan-der@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:33:53 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/17 13:44:19 by qvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

void	test_00(void)
{
	char	dest[20] = "Hello";
	char	src[] = ", world!";
	int		size = 20;
	unsigned int 	result;

	printf("--- EX02 - Test00\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %d\n", size);
	result = ft_strlcat(dest, src, size);
	printf("result: %s (should be Hello, world!)\n", dest);
	printf("return: %d (should be 13)\n", result);
}

void	test_01(void)
{
	char	dest[20] = "Hello";
	char	src[] = ", world!";
	int		size = 10;
	unsigned int 	result;

	printf("--- EX02 - Test01\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %d\n", size);
	result = ft_strlcat(dest, src, size);
	printf("result: %s (should be Hello, wo)\n", dest);
	printf("return: %d (should be 13)\n", result);
}

void	test_02(void)
{
	char	dest[20] = "";
	char	src[] = "Hello, world!";
	int		size = 20;

	printf("--- EX02 - Test02\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %d\n", size);
	ft_strlcat(dest, src, size);
	printf("result: %s (should be Hello, world!)\n", dest);
}

void	test_03(void)
{
	char	dest[20] = "Hello";
	char	src[] = "";
	int		size = 20;

	printf("--- EX02 - Test03\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %d\n", size);
	ft_strlcat(dest, src, size);
	printf("result: %s (should be Hello)\n", dest);
}

void	test_04(void)
{
	char	dest[20] = "Hello";
	char	src[] = " world!";
	int		size = 0;

	printf("--- EX02 - Test04\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %d\n", size);
	ft_strlcat(dest, src, size);
	printf("result: %s (should be Hello)\n", dest);
}

void	test_05(void)
{
	char	dest[20] = "Hello";
	char	src[] = " world!";
	int		size = 5;

	printf("--- EX02 - Test05\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %d\n", size);
	ft_strlcat(dest, src, size);
	printf("result: %s (should be Hello)\n", dest);
}

void	test_06(void)
{
	char	dest[20] = "Hello";
	char	src[] = ", world!";
	int		size = 13;

	printf("--- EX02 - Test06\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %d\n", size);
	ft_strlcat(dest, src, size);
	printf("result: %s (should be Hello, world)\n", dest);
}

void	test_07(void)
{
	char	dest[20] = "Hello";
	char	src[] = ", world!";
	int		size = 6;

	printf("--- EX02 - Test07\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %d\n", size);
	ft_strlcat(dest, src, size);
	printf("result: %s (should be Hello)\n", dest);
}

void	test_08(void)
{
	char	dest[20] = "Hello";
	char	src[] = ", world!";
	int		size = 11;

	printf("--- EX02 - Test08\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %d\n", size);
	ft_strlcat(dest, src, size);
	printf("result: %s (should be Hello, wor)\n", dest);
}

void	test_09(void)
{
	char	dest[100] = "Hello";
	char	src[] = ", world!";
	int		size = 100;

	printf("--- EX02 - Test09\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %d\n", size);
	ft_strlcat(dest, src, size);
	printf("result: %s (should be Hello, world!)\n", dest);
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
	test_03();
	test_04();
	test_05();
	test_06();
	test_07();
	test_08();
	test_09();
}
