/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:36:30 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/22 18:59:29 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int	i;
	int	b;

	i = 0;
	while (i < size -1)
	{
		b = tab[size -1];
		tab [size -1] = tab[i];
		tab [i] = b;
		i++;
		size--;
	}
}
/*
int main ()
{
    int size = 10;
    int tab [] = {0,1,2,3,4,5,6,7,8,9};
    ft_rev_int_tab(tab ,  size);  
    printf(" %d | %d",tab[0],tab[9]);
}
*/
