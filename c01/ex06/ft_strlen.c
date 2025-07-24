/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:33:25 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/23 14:55:07 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)

{
	int	i;

	i = 0;
	while (str [i])
	{
		i++;
	}
	return (i);
}
/*
int	main()
{
	int	x;

	x = ft_strlen("houssam");
	printf(" the number of characters in a string is = %d",x);
	return 0;
}
*/
