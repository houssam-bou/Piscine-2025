/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:25:10 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/27 16:09:20 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	test1[] = "houssamHOUSSAM";
	char	test2[] = "123456789";
	char	test3[] = "";

	printf("%d\n",ft_str_is_alpha(test1));
	printf("%d\n",ft_str_is_alpha(test2));
	printf("%d\n",ft_str_is_alpha(test3));
	return (0);
}
*/
