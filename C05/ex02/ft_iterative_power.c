/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 09:40:12 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/14 10:51:44 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = 1;
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_iterative_power(5, 5));
// 	return (0);
// }
