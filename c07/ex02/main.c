/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:11:23 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/18 13:49:04 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

void	ft_putarr(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
}

void	test_00(void)
{
	int	min;
	int	max;
	int	*range;

	min = 5;
	max = 20;
	ft_ultimate_range(&range, min, max);
	printf("--- EX02 - Test00\n");
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	ft_putarr(range, max - min);
	printf("\n");
}

void	test_01(void)
{
	int	min;
	int	max;
	int	*range;

	min = 10;
	max = 100;
	ft_ultimate_range(&range, min, max);
	printf("--- EX02 - Test01\n");
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	ft_putarr(range, max - min);
	printf("\n");
}

int	main(void)
{
	test_00();
	test_01();
}
