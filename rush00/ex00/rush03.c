/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodr2 <anarodr2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:15:10 by anarodr2          #+#    #+#             */
/*   Updated: 2022/07/09 18:01:18 by mnoguera         ###   ########.fr       */
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
	if ((f == 0 || f == y - 1) && c == 0)
	{
		ft_putchar('A');
	}
	else if ((f == 0 || f == y - 1) && c == x - 1)
	{
		ft_putchar('C');
	}
	else if (f == 0 || f == y - 1 || c == 0 || c == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
