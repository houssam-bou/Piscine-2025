/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:09:24 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/27 16:07:36 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
		if (size != 0)
		{
			while (i < size - 1 && src[i] != '\0')
			{
				dest [i] = src[i];
				i++;
			}
			dest[i] = '\0';
		}
	}
	return (src_len);
}
/*
int	main()
{
	char src [] = "houssam";
	char dest [50];

	ft_strlcpy(dest,src,3);
	printf("%s", dest);

}
*/
