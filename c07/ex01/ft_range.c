/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:24:43 by hbounar           #+#    #+#             */
/*   Updated: 2025/08/06 18:13:59 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	tab = malloc (sizeof (int) * (max - min));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main()
{
	int	i;
	int	min;
	int	max;
	int	*tab;

	tab = 0;
	min = 4;
	max = 9;
	tab = ft_range(min, max);
	i = 0;
	while (i < (max -min))
	{
		printf("%d \n", tab[i]);
		i++;
	}
	free(tab);
	tab = 0;
	return (0);
}
*/
