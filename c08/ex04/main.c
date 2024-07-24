/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:49:20 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/23 13:56:50 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	t_stock_str	*arr = ft_strs_to_tab(argc, argv);

	for (int i = 0; i <= argc; i++)
	{
		printf("String: %s, Length: %d, Copy: %s\n", arr[i].str, arr[i].size, arr[i].copy);
	}
	for (int i = 0; i < argc; i++)
	{
		free(arr[i].copy);
	}
	free(arr);
	return 0;
}
