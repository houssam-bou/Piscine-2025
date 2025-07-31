/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:47:16 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/31 22:24:59 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
int	swap(int *a,int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
char	*put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return str;
}
int	main(int argc,char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
	while (argv[i])
	{
		put_str(argv[i]);
			i++;
		
	}
	}
	return 0;
}

