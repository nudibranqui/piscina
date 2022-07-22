/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:34:00 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/13 12:33:40 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = a + 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar (a / 10 + '0');
			ft_putchar ('0' + a % 10);
			write (1, " ", 1);
			ft_putchar ('0' + b / 10);
			ft_putchar ('0' + b % 10);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}	
		a++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
