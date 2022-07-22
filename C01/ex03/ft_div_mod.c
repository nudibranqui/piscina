/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:51:21 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/14 20:11:03 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
	int	a;
	int	b;
	int *mod;
	int	*div;
	int c;
	int	d;

	mod = &c;
	div = &d;

	a = 5;
	b = 2;
	ft_div_mod(a, b, div, mod);
	printf("%d, %d", *div, *mod);
}
*/
