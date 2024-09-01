/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 08:38:53 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/28 18:53:18 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || ((str[i - 1] < '0' || str[i - 1] > '9')
					&& ((str[i - 1] < 'A' || str[i - 1] > 'Z'))
					&& ((str[i - 1] < 'a' || str[i - 1] > 'z'))))
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!(((i == 0 || str[i - 1] < '0' || str[i - 1] > '9')
						&& ((str[i - 1] < 'A' || str[i - 1] > 'Z'))
						&& ((str[i - 1] < 'a' || str[i - 1] > 'z')))))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char str[] = "salut, comment tu vas ? 42mots quarante-deux;";
// 	printf("====AVANT====\n%s\n", str);
// 	ft_strupcase(str);
// 	printf("====APRES====\n%s\n%s\n==== EXPECTED ====", str, "S");
// 	return (0);
// }
