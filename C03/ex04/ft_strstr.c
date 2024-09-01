/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:07:37 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/12 11:12:11 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if (!to_find[j])
			return (&str[i]);
		i++;
	}
	return (0);
}
// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int main(void)
// {
// 	char *res = strstr("Coucou Hlello Hello Hello pp", "ll");

// 	printf("%s\n", res);
// 	char *res2 = ft_strstr("Coucou Hlello Hello Hello pp", "ll");

// 	printf("%s\n", res2);
// 	return (1);
// }
