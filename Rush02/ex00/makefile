# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paescano <paescano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 11:44:04 by luclopez          #+#    #+#              #
#    Updated: 2022/08/29 19:22:03 by luclopez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE_NAME = rush-02   //creamos dos variables una rush y otra con el dict por defecto
DEFAULT_DICTIONARY = numbers.dict

$(FILE_NAME): //para compilar
	@gcc -Wall -Wextra -Werror -o $(FILE_NAME) main.c checker.c ft_aux.c open_read.c ft_print.c ft_print2.c 

fclean: //limpiar el a.out y lo que no sea diccionario
	@find . -name $(FILE_NAME) -delete
	@find data -name *.dict -not -name $(DEFAULT_DICTIONARY) -delete
