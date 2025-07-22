/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbounar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:00:01 by hbounar           #+#    #+#             */
/*   Updated: 2025/07/20 18:13:04 by hbounar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
	{
	write(1, &c, 1);
}

void	ft_min(int nb)
	{
	write(1, "-2147483648", 11);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_min (nb);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	if ((nb / 10) > 0)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar ((nb % 10) + '0');
}
/*
 int main()
{
    ft_putnbr(42);
    
    return 0;
}*/
