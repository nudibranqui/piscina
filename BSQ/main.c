/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:17:18 by pramos-m          #+#    #+#             */
/*   Updated: 2022/07/26 16:52:44 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void inicializar (int mat[] [], int tam)
{
	int	row;
	int	col;

	row = 0;
	while (row < buf)
	{
		col = 0;
		while (col < buf)
		{
			mat [row] [col] = 0;
			col++;
		}
		row++;
	}
}
// Funcion open: int open(const char *pathname, int flags);
// Funcion read: ssize_t read(int fd, void *buf, size_t count);
// funcion close: int close(int fd);
int leerarchivo(void)
{
	int	fd;
// file description
	int	tam;
	char buf[1];
// buf == numero de bytes que es capac d'emmagatzemar
	ssize_t nr_bytes;

	fd = open("./mifichero", O_RDONLY);
	if (fd == -1)
	{
		write (1, "Error al abrir el archivo \n", 25);
	}
	else
	{
		nr_bytes = read(fd, buf, 1); // Es posa 1 sol byte perque a la primera linea et surt el numero de lineas.
		tam = buf - '0';
		close(fd);
		if(nr_bytes == 0)
		{
			write (1, "Archivo vacio \n", 13);
		}
		else
		{
			inicializar(tam);
			//printf("El numero de characters es %d , contenido: %s \n", (int)nr_bytes, buf);
		}
	}
}
int	matriu(int	tam)
{
	int	i;
	int	mat [tam] [tam];

	mat = ((char **) malloc(tam + 1) *sizeof(char *));
	while (i < tam)
	{
		mat[i] = ((char*) malloc(tam + 1) *sizeof(char));
		mat[i] [buf] = '\0';
		i++;
	}
}

int	main(void)
{
	return (0);
}
