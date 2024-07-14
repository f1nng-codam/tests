/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:33:53 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/14 15:22:34 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

void	test_00(void)
{
	char			dest[] = "Hello";
	char			src[] = ", world!";
	unsigned int	nb = 8;

	printf("--- EX03 - Test00\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("nb: %d\n", nb);
	ft_strncat(dest, src, nb);
	printf("result: %s (should be Hello, world!)\n", dest);
}

void	test_01(void)
{
	char			dest[] = "Hello";
	char			src[] = ", world!";
	unsigned int	nb = 4;

	printf("--- EX03 - Test01\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("nb: %d\n", nb);
	ft_strncat(dest, src, nb);
	printf("result: %s (should be Hello, wo)\n", dest);
}

int	main(void)
{
	test_00();
	test_01();
}
