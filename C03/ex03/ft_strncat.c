/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 22:08:05 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/27 23:47:29 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	p;

	i = 0;
	if (nb == 0)
		return (0);
	while (dest[i] != '\0')
	{
		i++;
	}
	p = 0;
	while (src[p] != '\0' && p < nb)
	{
		dest[i + p] = src[p];
		p++;
	}
	dest[i + p] = '\0';
	return (dest);
}
/*
int	main(void)
{
	unsigned int	nb = 2;
	char dest[] = "aurora";
	char src[] = "rue Lopez";
	
	printf("%s\n", ft_strncat(dest, src, nb));
}*/
