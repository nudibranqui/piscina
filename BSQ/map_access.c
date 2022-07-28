/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_access.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:29:50 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/07/27 15:19:48 by aurue-lo         ###   ########.fr       */
/*                                                                            */
i
/* ************************************************************************** */
/*
#include<unistd.h>
#include<stdio.h>

int	map_access(char *filename, char *map, int size[2])
	int	col;
	int	row;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return(-1);
	i = 0;
	while (i < size[0])
	{
		col = 0;
		while(row < size[2])
		{
			if(!read(file, &map[col][row], 1))
				return(-1);
			row++;
		}
		col++;
	if(close (file) < 0)
		return(-1);
	return(0);	
}	*/
