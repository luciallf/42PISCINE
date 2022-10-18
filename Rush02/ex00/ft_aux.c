/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:39:08 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/29 19:00:28 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

//contiene las funciones auxiliares que necesitamos

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_atoi(char *str) //convertimos de char a int
{
	int	x[3]; 

	x[0] = 0; //es para avanzar en la cadena
	x[1] = 1; ///es para el signo
	x[2] = 0; //es para el numero
	while ((str[x[0]] >= '\t' && str[x[0]] <= '\r') || str[x[0]] == ' ') // avanzamos por si hay espacio o tabuladores como is space3
		x[0]++;
	while (str[x[0]] == '+' || str[x[0]] == '-') //aqui calculamos el signo 
	{
		if (str[x[0]] == '-')
			x[1] = x[1] * -1;
		x[0]++;
	}
	while (str[x[0]] >= '0' && str[x[0]] <= '9' && str[x[0]] != '\0') //aqui calculamos el numero
	{
		x[2] = x[2] * 10;
		x[2] = x[2] + str[x[0]] - 48;
		x[0]++;
	}
	x[2] = x[2] * x[1];
	return (x[2]); //aquí aplicamos el signo y nos devuelve el numero 
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

void	ft_print_str(char *dict, int position) //imprime el numero del directorio
{
	while (dict[position] != '\n')
	{
		ft_putchar(dict[position]);
		position++;
	}
	ft_putchar(' ');
}
