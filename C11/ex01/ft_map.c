/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:22:27 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/26 18:53:53 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*tab_alt;
	int	i;

	i = 0;
	tab_alt = malloc((length) * sizeof(int));
	while (i < length)
	{
		tab_alt[i] = f(tab[i]);
		i++;
	}
	return (tab_alt);
}

// int	love42(int nb)
// {
// 	nb = 42;
// 	return (nb);
// }

// int	main()
// {
// 	int tab[6] = {12, 15, 78 ,9, 48, 78};
// 	int size = 6;

// 	int i = 0;
// 	printf("======AVANT======\n");
// 	while (i < size)
// 	{
// 		printf("%d -> %d\n", i, tab[i]);
// 		i++;
// 	}
// 	printf("======APRES======\n");
// 	int *tab2 = ft_map(tab, size, love42);

// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d -> %d\n", i, tab2[i]);
// 		i++;
// 	}
// 	return (0);
// }
