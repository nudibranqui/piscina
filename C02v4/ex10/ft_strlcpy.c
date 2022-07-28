/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:34:27 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/26 12:52:41 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	contador;

	i = 0;
	contador = 0;
	while (src[i] != '\0')
	{
		if (size && (i < (size - 1)))
		{
			dest[i] = src[i];
			contador++;
		}
	i++;
	}
	dest[cnt] = '\n';
	return (i);
}
