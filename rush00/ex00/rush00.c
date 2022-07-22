/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:19:21 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/10 17:29:12 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	imprimir(int c, int f, int x, int y);

void	rush(int x, int y)
{
	int	c;
	int	f;

	if (x <= 0 || y <= 0)
	{
		write(1, "Only positive numbers, try again :(", 35);
	}
	else
	{
		f = 0;
		while (f < y)
		{
			c = 0;
			while (c < x)
			{
				imprimir(c, f, x, y);
				c++;
			}
			ft_putchar('\n');
			f++;
		}
	}
}

void	imprimir(int c, int f, int x, int y)
{
	if ((f == 0 || f == y - 1) && (c == 0 || c == x - 1))
	{
		ft_putchar('o');
	}
	else if ((f == 0 || f == y - 1) && c > 0 && c < x - 1)
	{
		ft_putchar('-');
	}
	else if (f > 0 && f < y - 1 && (c == 0 || c == x - 1))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}
