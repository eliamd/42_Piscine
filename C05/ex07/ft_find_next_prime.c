/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:48:45 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/15 14:27:18 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime_recursive(int nb, int divisor)
{
	if (divisor * divisor > nb)
		return (1);
	if (nb % divisor == 0)
		return (0);
	return (is_prime_recursive(nb, divisor + 1));
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (is_prime_recursive(nb, 2) == 1)
	{
		return (nb);
	}
	else
	{
		return (ft_find_next_prime(nb + 1));
	}
}
// #include <stdio.h>

// int main(void)
// {
//     printf("%d\n", ft_find_next_prime(1));
//     printf("%d\n", ft_find_next_prime(2));
//     printf("%d\n", ft_find_next_prime(4));
//     return 1;
// }
