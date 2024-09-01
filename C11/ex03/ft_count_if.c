/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:17:24 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/28 11:30:48 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	result;

	result = 0;
	while (str[result])
		result++;
	return (result);
}

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	tab_index;
	int	result;

	tab_index = 0;
	result = 0;
	while (tab_index < length)
	{
		if (f(tab[tab_index]) != 0)
			result++;
		tab_index++;
	}
	return (result);
}

// int	isletter_a(char *str)
// {
// 	while (*str)
// 	{
// 		if (*str == 'A')
// 			return (1);
// 		str++;
// 	}
// 	return (0);
// }

// int	main(int argc, char *argv[])
// {
// 	printf("=== Taille de argv : %d ===\n", argc);
// 	printf("=== RESULT: %d ===\n", ft_count_if(argv, argc, isletter_a));
// 	return (0);
// }
