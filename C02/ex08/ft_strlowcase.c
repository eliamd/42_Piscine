/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:35:36 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/09 09:37:05 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// #include <unistd.h>

// int main(void)
// {
// 	char str[4];
// 	str[0] = 'A';
// 	str[1] = '6';
// 	str[2] = 'C';
// 	str[3] = 'D';

// 	ft_strlowcase(str);
// 	write(1, str, 4);
// 	return 0;
// }
