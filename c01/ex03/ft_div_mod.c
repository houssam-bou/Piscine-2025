/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:36:05 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/22 18:52:39 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = (a / b);
	*mod = (a % b);
}
/*
int main()
{
    int a = 25 , b = 5;
 int div , mod;
 ft_div_mod(a, b, &div, &mod);

    printf("%d \n%d",div ,mod);


    return 0;
}
*/
