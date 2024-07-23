/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:05:51 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/18 11:54:48 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

void	test_00(void)
{
	char	*src;
	char	*new_str;

	src = "Hello, world!";
	new_str = ft_strdup(src);
	printf("--- EX00 - Test00\n");
	printf("src: %s\n", src);
	printf("new string: %s\n", new_str);
}

void	test_01(void)
{
	char	*src;
	char	*new_str;

	src = "This is another string!";
	new_str = ft_strdup(src);
	printf("--- EX00 - Test01\n");
	printf("src: %s\n", src);
	printf("new string: %s\n", new_str);
}

int	main(void)
{
	test_00();
	test_01();
}
