/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:26:20 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/27 16:10:14 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	test1[] = "houssam !!42";
	char	test2[] = "\n";

	printf("%d\n",ft_str_is_printable(test1));
	printf("%d\n",ft_str_is_printable(test2));
	return (0);
}
*/
