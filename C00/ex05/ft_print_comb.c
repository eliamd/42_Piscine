/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:22:32 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/07 13:52:16 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_values(char a, char b, char c)
{
	char	numbers[3];

	numbers[0] = '0' + a;
	numbers[1] = '0' + b;
	numbers[2] = '0' + c;
	write(1, numbers, 3);
	if (a != 7 || b != 8 || c != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	b = a + 1;
	c = b + 1;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_values(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
