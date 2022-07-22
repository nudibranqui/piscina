/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:44:41 by jsebasti          #+#    #+#             */
/*   Updated: 2022/07/17 16:48:23 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "Calla oktorok\n", 14);
		return (0);
	}
	else
	{
		char mati[4][4];
		int contadorcolumnes;
		int contadorfiles;
		int	i;

		i = 0;
		contadorfiles = 0;
		while (contadorfiles < 4)
		{
			contadorcolumnes = 0;
			while (contadorcolumnes < 4)
			{
				if (argv[1][i] > 0 && argv[1][i] < 4)
				{
					mati[contadorfiles][contadorcolumnes] = argv[1][i];
				}
				contadorcolumnes++;
				i += 2;
			}
			contadorfiles++;
		}
	}
	
	return (0);
}
