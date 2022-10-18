/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <luclopez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:02:09 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/29 18:52:44 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_checker(char *str)
{
	int	x;

	if (*str == '\0') // si el numero está vacío devolvemos 0
		return (0);
	else
	{
		while (*str != '\0') // comprobamos que sea un nnumero si no 0
		{
			if (*str >= '0' && *str <= '9')
				x = 1;
			else
				return (0);
			str++;
		}
	}
	return (x); //que devuelva 1 si es un numero
}
