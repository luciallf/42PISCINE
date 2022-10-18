/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <luclopez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:27:09 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/29 19:19:20 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	ft_print_tens(int x, char *str, char *dict, int number)
{
	str[x - 1] = number % 10 + 48; //aquí guardamos las unidades
	str[x - 2] = number / 10 + 48; //aqui guardamos las decenas 
	if (number <= 10 || number >= 20) //aqui imprimimos los casos especiales 
	{
		if (str[x - 1] == '0') // esto es para el caso de 20,30,40,50...
		{
			str[x - 1] = 48; //coloco las unidades a 0
			ft_find_tens(str, dict); 
		}
		else
		{
			str[x - 1] = 48; //aquí imprime las decenas con unidades
			ft_find_tens(str, dict);
			str[x - 1] = number % 10 + 48;
			ft_find_units(str[1], dict);
		}
	}
	else
		ft_find_tens(str, dict); //para que busque la decena en sí si los casos anteriores fallan 
}

void	ft_print_hundred(int x, char *str, char *dict, int number)
{
	int		i;
	char	tens[2]; //esto es para luego enviar las decenas

	i = number / 100;
	str[x - 1] = '0';
	str[x - 2] = '0';
	str[x - 3] = ((number / 100) / i) + 48;
	ft_find_units(i + '0', dict);
	ft_find_hundred(str, dict);
	tens[1] = number % 10 + 48;
	tens[0] = ((number % 100) / 10) + 48;
	number = number % 100;
	ft_print_tens(x - 1, str, dict, number);
}

void	ft_print(int number, char *dict)
{
	char	*str; //creo el puntero donde se van a guardar los numeros con sus posiciones
	int		x; //guardo la cantidad de digitos

	x = ft_count_digits(number); //asigno los digitos
	str = malloc(ft_count_digits(number) * sizeof(char)); //creo la cadena str con la longitud de los digitos
	if (x == 3) //si hay 3 digitos que empiece a imprimir las centenas
		ft_print_hundred(x, str, dict, number);
	if (x == 2)
		ft_print_tens(x, str, dict, number); //si hay dos digitos las decenas...
	if (x == 1 || x == 0)
		ft_print_units(x, str, dict, number);
	free(str); // libero el str
}
