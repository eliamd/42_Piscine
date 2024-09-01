/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:59:50 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/08 12:03:53 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	n;
	int	i;

	n = 0;
	i = size - 1;
	temp = 0;
	while (n < i)
	{
		temp = tab[n];
		tab[n] = tab[i];
		tab[i] = temp;
		n++;
		i--;
	}
}
