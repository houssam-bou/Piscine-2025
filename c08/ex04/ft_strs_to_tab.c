/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 01:12:56 by hbounar           #+#    #+#             */
/*   Updated: 2025/08/07 01:31:26 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	ft_strdup(char str)
{
	char	copy;
	int		i;

	i = 0;
	while (str[i])
		i++;
	copy = malloc(sizeof(char)(i + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

void	free_tab(struct s_stock_str *tab, int i)
{
	while (i > 0)
	{
		i--;
		free(tab[i].copy);
	}
	free(tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	tab;

	tab = malloc(sizeof(struct s_stock_str)(ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (tab[i].copy == NULL)
		{
			free_tab(tab, i);
			return (NULL);
		}
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
