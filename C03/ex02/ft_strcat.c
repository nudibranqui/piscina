/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:46:16 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/27 18:55:54 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	p;
	int	s;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	s = 0;
	while (src[p] != '\0')
	{
		dest[p] = src[s];
		p++;
		s++;
	}
	dest[p] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[] = "aurora";
	char src[] = "rue";
	printf ("%s\n", ft_strcat(dest, src));
	printf ("%s\n", strcat(dest, src));
}*/
