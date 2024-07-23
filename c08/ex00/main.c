/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:30:46 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/23 10:02:11 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 104;
	ft_putstr("Hello, world!\n");
	printf("a & b before: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a & b after: a = %d, b = %d\n", a, b);
	printf("strlen: %d\n", ft_strlen("Hello, world!"));
	printf("strcmp: %d\n", ft_strcmp("apple", "appletree"));
}
