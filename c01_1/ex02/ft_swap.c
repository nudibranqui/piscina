/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:25:11 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/14 19:43:38 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

/*
int main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = 5;
	d = 7;
	a = &c;
	b = &d;
	
	ft_swap(a, b);
	printf("%d %d", *a, *b);
	return (0);	
}
*/
