/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 00:04:13 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/27 03:05:55 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
//#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}	

/*int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "me gusta la musica";
	s2 = "amo dibujar";
	printf ("%d,\n", ft_strcmp (s1, s2));
	printf ("%d,\n", strcmp (s1, s2));
	return (0);
}*/	
