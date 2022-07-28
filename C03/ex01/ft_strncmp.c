/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:30:15 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/27 03:04:07 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
//#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;
	unsigned int	n;

	n = 4;
	s1 = "idme gusta la musica";
	s2 = "id ufttuff";
	printf("%d,\n", ft_strncmp(s1, s2, n));
	printf("%d,\n", strncmp(s1, s2, n));
	return (0);
}
*/
