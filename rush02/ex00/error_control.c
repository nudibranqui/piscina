/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:03:39 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/23 17:48:08 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

/*vamos a controlar primero los espacios y tabuladores, despues el signo y
 despues convertiremos. Propongo hacerlo asi orque nos dice que debemos tratar los numeros del diccionario como atoi. pero no se si va en el mismo archivo */

int ft_atoi(cont char *str)
{
	int resultat;
	int signe;

	resultat = 0;
	signe = 1;
//tractem l'espai i els tabs.
	while (*str == 32 || (*str >= 9 && *str <= 13)
		str++;
//tractem el signe i donem error pq es un unsigned int
	if (*str == '-')
		write (1, "Error\n", 6);
//tractem la llargada maxima de string, que sera de 6 caracters



		
//fem la conversio
	while (*str >= '0' && *str < '9')
	{
		resultat = resultat * 10 + *str - '0';
		str ++;
	}

	return(resultat);
}

//per comprobar:
int	main(


