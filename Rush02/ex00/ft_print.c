/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <luclopez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:32:56 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/29 19:39:28 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_count_digits(int number) //para que te cuente los digitos que tiene el numero
{
	int	i;

	i = 0;
	while (number >= 1)
	{
		i++;
		number /= 10;
	}
	return (i);
}

void	ft_find_units(char c, char *dict) //busca las unidades dentro del numero que tengamos en el directorio 
{
	int	i;

	i = 0;
	while (dict[i] != '\0')
	{
		if (c == dict[i] && dict[i + 1] == ':' && dict[i - 1] == '\n') //buscamos los numero del 1 al 9
			ft_print_str(dict, (i + 3));
		else if (c == '0' && dict[i + 1] == ':' && dict[i - 1] == '\0') //buscamos el 0
			ft_print_str(dict, (i + 3));
		i++
	i = 0;
	while (dict[i] != '\0')
	{
		if (str[0] == dict[i] && str[1] == dict[i + 1] && dict[i + 2] == ':'
			&& dict[i - 1] == '\n')
			ft_print_str(dict, (i + 4));
		else if (str[0] == dict[i] && str[1] == dict[i + 1]
			&& dict[i + 1] == ':' && dict[i - 1] == '\0')
			ft_print_str(dict, (i + 4));
		i++;
	}
}

void	ft_find_hundred(char *str, char *dict)
{
	int	i;

	i = 0;
	while (dict[i] != '\0')
	{
		if (str[0] == dict[i] && str[1] == dict[i + 1]
			&& str[2] == dict[i + 2] && dict[i + 3] == ':'
			&& dict[i - 1] == '\n')
			ft_print_str(dict, (i + 5));
		i++;
	}
}

void	ft_print_units(int x, char *str, char *dict, int number)
{
	str[x - 1] = number % 10 + 48; //aquí guardamos el numero en la posición correspondiente
	if (x == 0)
		ft_find_units(48, dict); //lo convertimos a char
	ft_find_units(str[0], dict); // aquí enviamos el número en sí que sería el char
}
