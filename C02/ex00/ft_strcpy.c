/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:39:50 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/21 13:12:04 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
/*
int main(void)
{
	char origen[12] = "Hello world";
	char desti[12];
	char *src = origen;
	char *dest = desti;

	ft_strcpy(dest, src);
	printf("%s", desti);
	return(0);
}
*/
