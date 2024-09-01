/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:11:22 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/26 15:38:55 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// void	ft_putnbr(int nb)
// {
// 	char	nbchar;

// 	if (nb == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 		return ;
// 	}
// 	if (nb < 0)
// 	{
// 		write(1, "-", 1);
// 		nb = -nb;
// 	}
// 	if (nb >= 10)
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putnbr(nb % 10);
// 		return ;
// 	}
// 	else
// 	{
// 		nbchar = nb + '0';
// 		write(1, &nbchar, 1);
// 	}
// }

// int	main()
// {
// 	int tab[6] = {12, 15, 78 ,9, 48, 78};
// 	int size = 6;

// 	ft_foreach(tab, size, ft_putnbr);
// 	return (0);
// }
