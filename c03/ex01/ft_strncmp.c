/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:43:21 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/29 10:09:47 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2 [i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
        char s1[] = "b";
        char s2[] = "abci";
        printf("%d",ft_strncmp(s1,s2,2));
}
*/
