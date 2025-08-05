/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:47:16 by hbounar           #+#    #+#             */
/*   Updated: 2025/08/03 16:38:49 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_cmp(char *s1, char *s2)
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

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*c;

	i = 1;
	if (argc <= 1)
		return (0);
	while (i <= argc - 1)
	{
		j = 1 ;
		while (j <= argc - 1 - i)
		{
			if (str_cmp(argv[j], argv[j + 1]) > 0)
			{
				c = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = c;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i <= argc - 1)
		put_str(argv[i++]);
}
