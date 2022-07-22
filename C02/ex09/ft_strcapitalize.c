/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:52:16 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/21 20:17:25 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if ((str[0] > 96 && str[0] < 123))
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] += 32;
		}
		if (str[i] > 96 && str[i] < 123)
		{	
			if (!((str[i - 1] > 96 && str[i - 1] < 123)
					|| (str[i - 1] > 47 && str[i - 1] < 58)
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
			{
				str[i] -= 32;
			}	
		}
		i++;
	}	
	return (str);
}
/*
int	main(void)
{
	char	*str;
	char	h[200] = "sAlut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(h));
	return (0);
}
*/
