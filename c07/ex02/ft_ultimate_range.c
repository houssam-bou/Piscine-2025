/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 21:32:48 by hbounar           #+#    #+#             */
/*   Updated: 2025/08/06 18:15:13 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc (sizeof (int) * (max - min));
	if (*range == NULL)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
/*
int	main()
{
	int	max;
	int	min;
	int	*range;
	int	i;
	int	result;

	max = 20;
	min = 5;
	i = 0;
	result = ft_ultimate_range(&range,min,max);
	while (i < (max - min))
	{
		printf("%d \n",range[i]);
		i++;
	}
	printf("\nthe size of (max - min) = %d \n",result);
	free (range);
	range = 0;
	return (0);
}
*/
