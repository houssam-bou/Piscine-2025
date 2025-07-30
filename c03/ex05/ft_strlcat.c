/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:13:28 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/30 14:18:43 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	str_len(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	j;

	i = 0;
	dest_len = str_len(dest);
	src_len = str_len(src);
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	while (j < size - dest_len - 1 && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest_len + src_len);
}
/*
int main ()
{
	char	dst [50] = "houssam ";
	char	src [] = "bounar";
	printf("%d" , ft_strlcat(dst,src,50));
	printf(" \n %s ",dst  );
}
*/
