/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:38:39 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/15 13:44:13 by edetoh           ###   ########.fr       */
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

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	return (is_prime_recursive(nb, 2));
}
// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_is_prime(10));
// 	printf("%d\n", ft_is_prime(7));
// 	printf("%d\n", ft_is_prime(-7));
// 	return 1;
// }
