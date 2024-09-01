/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:08:50 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/19 17:45:13 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	j = (max - min);
	i = 0;
	tab = malloc((j) * sizeof(int));
	if (!tab)
		return (NULL);
	while ((min + i) < max)
	{
		tab[i] = (min + i);
		i++;
	}
	return (tab);
}
// int	main(int argc,char *argv[])
// {
// 	int min = 50;
// 	int max = 100;
// 	int *range;
// 	int i;

// 	(void)argc;
// 	range = ft_range(atoi(argv[1]), atoi(argv[2]));

// 	for (i = 0; i < (max - min); i++)
// 	{
// 		printf("%d ", range[i]);
// 	}
// 	printf("\n");

// 	free(range);
// 	return (0);
// }
