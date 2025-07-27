/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:17:48 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/24 20:40:02 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32 ;
		}
		i++;
	}
	return (str);
}
/*
int	main()

{
	char	test1[] = "houssam";

	printf("%s",ft_strupcase(test1));
	return (0);
}
*/
