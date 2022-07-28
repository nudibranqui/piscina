/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:57:29 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/28 05:11:18 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
//#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	while (str[i] != '\0')
	{
		f = 0;
		while (str[i + f] == to_find[f] && str[i + f] != '\0')
		{	
			if (to_find[f + 1] == '\0')
				return (&str[i]);
				f++;
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char	str[] = "hola mundo";
	char	to_find[] = "la mu";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	return(0);
}
*/
