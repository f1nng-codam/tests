/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:00:25 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/18 12:24:18 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

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
	int	*arr;

	min = 5;
	max = 20;
	arr = ft_range(min, max);
	printf("--- EX01 - Test00\n");
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	ft_putarr(arr, max - min);
	printf("\n");
}

void	test_01(void)
{
	int	min;
	int	max;
	int	*arr;

	min = 10;
	max = 100;
	arr = ft_range(min, max);
	printf("--- EX01 - Test01\n");
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	ft_putarr(arr, max - min);
	printf("\n");
}

int	main(void)
{
	test_00();
	test_01();
}
