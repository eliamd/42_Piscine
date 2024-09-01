/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:31:28 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/27 19:08:18 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_sorted_asc;
	int	is_sorted_desc;

	if (length <= 1)
		return (1);
	is_sorted_asc = 1;
	is_sorted_desc = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			is_sorted_asc = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			is_sorted_desc = 0;
		i++;
	}
	return (is_sorted_asc || is_sorted_desc);
}

// int	ft_issup(int nb1, int nb2)
// {
// 	if (nb1 < nb2)
// 		return (-1);
// 	if (nb1 == nb2)
// 		return (0);
// 	return (1);
// }

// int	main(int argc, char *argv[])
// {
// 	int tab[5] = {1, 2, 3, 4, 5};
// 	int size = 5;
// 	(void)argv;
// 	(void)argc;

// 	printf("=== Taille du tab : %d ===\n", size);
// 	printf("=== RESULT: %d ===\n", ft_is_sort(tab, size, ft_issup));
// 	return (0);
// }
