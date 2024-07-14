/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:33:53 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/14 15:09:18 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

void	test_00(void)
{
	char	dest[] = "Hello";
	char	src[] = ", world!";

	printf("--- EX02 - Test00\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	ft_strcat(dest, src);
	printf("result: %s (should be Hello, world!)\n", dest);
}

int	main(void)
{
	test_00();
}
