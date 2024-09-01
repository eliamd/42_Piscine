/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:30:46 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/07 15:19:25 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_values(char a, char b)
{
	char	string[5];

	if (a < 10)
	{
		string[0] = '0' + 0;
	}
	else
	{
		string[0] = '0' + (a / 10);
	}
	string[1] = '0' + (a % 10);
	string[2] = ' ';
	if (b < 10)
	{
		string[3] = '0' + 0;
	}
	else
	{
		string[3] = '0' + (b / 10);
	}
	string[4] = '0' + (b % 10);
	write(1, string, 5);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = a + 1;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			print_values(a, b);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
