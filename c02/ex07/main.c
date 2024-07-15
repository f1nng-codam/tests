/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qvan-der <qvan-der@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:55:17 by qvan-der          #+#    #+#             */
/*   Updated: 2024/07/15 12:53:29 by qvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

void	test_00(void)
{
	char	str[53] = "abcABC";

	printf("--- EX07 - Test00\n");
	printf("str: %s\n", str);
	printf("result: %s (should be ABCABC)\n", ft_strupcase(str));
}

void	test_01(void)
{
	char	str[53] = "Hello world!";

	printf("--- EX07 - Test01\n");
	printf("str: %s\n", str);
	printf("result: %s (should be HELLO WORLD!)\n", ft_strupcase(str));
}

int	main(void)
{
	test_00();
	test_01();
}
