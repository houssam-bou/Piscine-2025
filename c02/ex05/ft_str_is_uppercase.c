/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:14:37 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/27 16:10:00 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	test1[] = "HOUSSAM";
	char	test2[] = "houssam";

	printf("%d \n",ft_str_is_uppercase(test1));
	printf("%d \n",ft_str_is_uppercase(test2));
}
*/
