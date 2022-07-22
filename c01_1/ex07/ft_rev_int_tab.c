/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:58:44 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/20 14:19:52 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

/*void	ft_rev_int_tab(int *tab, int size);*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	ultim;
	int	primer;
	int	aux;

	ultim = size - 1;
	primer = 0;
	while (primer < size / 2)
	{
		aux = tab[ultim];
		tab[ultim] = tab[primer];
		tab[primer] = aux;
		primer++;
		ultim--;
	}
}
/*
int	main(void)
{
	int	tab[10] = {0,1,2,3,4,5,6,7,8,9};
	int	size = 10;
	int i = 0;

	ft_rev_int_tab(tab, size); 
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return(0);
}
*/
