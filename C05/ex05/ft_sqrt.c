/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 09:18:21 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/15 11:35:41 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	findsqrt(int nb, int i)
{
	if (nb < 0)
		return (0);
	if (i * i == nb)
		return (i);
	if (i * i < nb)
		return (findsqrt(nb, i + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (findsqrt(nb, 0));
}
