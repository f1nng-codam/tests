/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qvan-der <qvan-der@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:40:05 by qvan-der          #+#    #+#             */
/*   Updated: 2024/07/15 13:06:45 by qvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_putstr_non_printable(char *str);

void	test_00(void)
{
	char	str[] = "Coucou\ntu vas bien ?";

	printf("--- EX07 - Test00\n");
	printf("str: %s\n", str);
	printf("result (should be 'Coucou\\0atu vas bien ?'):\n");
	ft_putstr_non_printable(str);
}

void	test_01(void)
{
	char	str[] = "Hello\x01World\x02!";

	printf("\n--- EX07 - Test01\n");
	printf("str: %s\n", str);
	printf("result (should be 'Hello\\01World\\02!'):\n");
	ft_putstr_non_printable(str);
}

void	test_02(void)
{
	char	str[] = "Example with \x1F some non-printable \x7F chars.";

	printf("\n--- EX07 - Test02\n");
	printf("str: %s\n", str);
	printf("result (should be 'Example with \\1f some non-printable \\7f chars.'):\n");
	ft_putstr_non_printable(str);
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
}
