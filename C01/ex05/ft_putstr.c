/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:22:00 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/18 16:05:59 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

/*void	ft_putstr(char *str);*/

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{	
		write(1, str, 1);
		str++;
	}
}

/*	
int	main(void)
{
	char str[20] = "Hola mundo";
	
	ft_putstr(&str[0]);
}
*/
