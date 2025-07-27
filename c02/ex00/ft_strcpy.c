/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:34:37 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/27 16:08:48 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while (src [i])
	{
		dest [i] = src [i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}
/*
int	main()
{
	char src [] = "houssam is a future student . ";
	char dest [50];
	ft_strcpy(dest,src);
	printf("%s",dest);
}
*/
