/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:06:39 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/24 17:17:04 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	test1[] = "0123456789";
	char    test2[] = "houssam";

	printf("%d \n",ft_str_is_numeric(test1));
	printf("%d \n",ft_str_is_numeric(test2));
	return (0);
}
*/
