/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <luclopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:15:51 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/29 18:51:52 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	main(int argc, char **argv)
{
	int		input;
	char	*str;

	if (argc == 2 && ft_checker(argv[1])) //esto es para comprobar que es un numero y que haya dos parametros
	{
		input = ft_atoi(argv[1]); //transforma de un char a un int (que es lo que hace el atoi)
		str = ft_read_file("numbers.dict"); //guardamos en un puntero el diccionario
		ft_print(input, str); // imprimimos el numero con el diccionario
		free(str); // liberar el diccionario
	}
	else if (argc == 3 && ft_checker(argv[2]))
	{ // esto seria igual que arriba pero con dos
		input = ft_atoi(argv[2]);
		str = ft_read_file(argv[1]);
		ft_print(input, str);
		free(str);
	}
	else //si falla los argumentos de entradas escribe error
		ft_putstr("error");
	ft_putchar('\n');
	return (0);
}
