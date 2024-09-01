/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tolivaud <tolivaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:05:51 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/11 11:08:35 by tolivaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	printletter(int x, int a, int b, int c)
{
	int	i;

	i = 0;
	if (x >= 1)
		ft_putchar(a);
	while (i < (x - 2))
	{
		ft_putchar(b);
		i++;
	}
	if (x >= 2)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y >= 1 && x >= 1)
		printletter(x, '/', '*', '\\');
	while (i < (y - 2) && x >= 1)
	{
		printletter(x, '*', ' ', '*');
		i++;
	}
	if (y >= 2 && x >= 1)
	{
		printletter(x, '\\', '*', '/');
	}
}
