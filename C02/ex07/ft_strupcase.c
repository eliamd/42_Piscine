/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 08:38:53 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/09 09:32:25 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// #include <unistd.h>

// int main(void)
// {
// 	char str[4];
// 	str[0] = 'a';
// 	str[1] = '6';
// 	str[2] = 'c';
// 	str[3] = 'd';

// 	ft_strupcase(str);
// 	write(1, str, 4);
// 	return 0;
// }
