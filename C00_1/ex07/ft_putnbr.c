/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:53:21 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/14 11:20:14 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

::void	ft_putchar(char c);

void	ft_putnbr(int nb)

{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}	
	else
	{	
		if (nb < 0)
		{		
			nb = -nb;
			write(1, "-", 1);
		}	
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_putchar(char c)

{
	write (1, &c, 1);
}
