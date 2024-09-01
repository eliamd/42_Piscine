/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:05:21 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/27 17:36:31 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tablen(char **tab)
{
	int	result;

	result = 0;
	while (tab[result] != 0)
		result++;
	return (result);
}

int	ft_any(char **tab, int (*f)(char*))
{
	int	tab_index;

	tab_index = 0;
	while (tab_index < ft_tablen(tab))
	{
		if (f(tab[tab_index]) != 0)
			return (1);
		tab_index++;
	}
	return (0);
}

// int	isletter_a(char *letter)
// {
// 	if (*letter == 'A')
// 		return (1);
// 	return (0);
// }

// int	main(int argc, char *argv[])
// {
// 	(void)argc;
// 	printf("=== Taille de argv : %d ===\n", (ft_tablen(argv) - 1));
// 	printf("=== RESULT avec isletter_a : %d ===\n", ft_any(argv, isletter_a));
// 	return (0);
// }
