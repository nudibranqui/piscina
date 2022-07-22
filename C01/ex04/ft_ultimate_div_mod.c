/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utimate_div_mod.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:38:44 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/18 09:57:16 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}	
/*
int	main(void)
{
	int *a;
	int	*b;	
	int	x;
	int	y;
	
	x = 7;
	y = 2;
	a = &x;
	b = &y;

	ft_ultimate_div_mod(a, b);
	printf("%d", *a);
	printf("%d", *b);
	return(0);
}
*/
