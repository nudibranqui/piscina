# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 10:56:37 by aurue-lo          #+#    #+#              #
#    Updated: 2022/07/26 11:03:19 by aurue-lo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = *.c

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

RM = /bin/rm/ -f

$(NAME):
	@gcc $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) *.o*

fclean: clean
	@$(RM) $(NAME)

