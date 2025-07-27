/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:52:03 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/27 15:07:02 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_len;

	i = 0;
	new_len = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str [i] <= '9'))
		{
			if (new_len == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			if (new_len != 1 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			new_len = 0;
		}
		else
			new_len = 1;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	test [] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("%s", ft_strcapitalize(test));

}
*/
