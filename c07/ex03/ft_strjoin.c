/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:47:01 by hbounar           #+#    #+#             */
/*   Updated: 2025/08/06 18:40:21 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	str_cat(char *dest, char *src, int *w)

{
	int	j;

	j = 0;
	while (src[j])
	{
		dest[*w] = src[j];
		*w += 1;
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)

{
	int		total_len;
	int		i;
	int		w;
	char	*copy;

	i = 0;
	total_len = 0;
	while (i < size)
		total_len = total_len + str_len(strs[i++]);
	total_len += (str_len(sep) * (size - 1));
	copy = malloc(total_len + 1);
	if (copy == NULL)
		return (NULL);
	w = 0;
	i = 0;
	while (i < size)
	{
		str_cat (copy, strs[i], &w);
		if (i < size - 1)
			str_cat (copy, sep, &w);
		i++;
	}
	copy[w] = '\0';
	return (copy);
}
/*
#include <stdio.h>

int main()
{
    char *strs[] = {"houssam", "bounar", "1337"};
    char *sep = "-";
    char *result = ft_strjoin(3, strs, sep);
    printf("%s\n", result);
    free(result);
    return 0;
}
*/
