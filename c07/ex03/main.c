/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:48:02 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/18 14:48:33 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

void	test_00()
{
	int		size = 3;
	char	*strs[] = {"Apple", "Banana", "Strawberry"};
	char	*sep = ", ";

	printf("--- EX03 - Test00\n");
	printf("result: %s (should be Apple, Banana, Strawberry)\n", ft_strjoin(size, strs, sep));
}

void	test_01()
{
	int		size = 3;
	char	*strs[] = {"Red", "Green", "Blue"};
	char	*sep = "; ";

	printf("--- EX03 - Test01\n");
	printf("result: %s (should be Red; Green; Blue)\n", ft_strjoin(size, strs, sep));
}

int	main(void)
{
	test_00();
	test_01();
}
