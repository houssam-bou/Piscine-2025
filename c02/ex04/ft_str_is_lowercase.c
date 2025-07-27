/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:17:58 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/27 16:09:43 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	test1[] = "houssam";
	char	test2[] = "42";

	printf("%d \n",ft_str_is_lowercase(test1));
	printf("%d \n",ft_str_is_lowercase(test2));
}
*/
