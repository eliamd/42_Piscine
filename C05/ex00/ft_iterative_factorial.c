/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:29:29 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/13 15:43:53 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	i = nb;
	if (nb < 0)
		return (0);
	while (i > 1)
	{
		result = result * i;
		i--;
	}
	return (result);
}

// int	main(void)
// {
// 	ft_iterative_factorial(2);
// 	return (1);
// }
