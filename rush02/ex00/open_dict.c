/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruba.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncastell <ncastell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:01:28 by ncastell          #+#    #+#             */
/*   Updated: 2022/07/24 17:03:53 by ncastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int fd;
	//char buff[45];
	ssize_t num_bytes;
	char *my_data;

	fd = open("numbers.dict", O_RDONLY);



	if(fd == -1)
	{
		printf("There are a problem with the opening of the file \n");
	}
	else
	{
		my_data = (char *)malloc((700 + 1) * sizeof(char));
		num_bytes = read(fd, my_data, 700);
		close(fd);

		if(num_bytes == 0)
		{
			printf("Empty file \n");
		}
		else
		{
			printf("The number of characters is %d \ncontent %s \n", (int)num_bytes, my_data);
		}
	}
	return (0);
}
