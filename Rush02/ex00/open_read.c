/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <luclopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:29:00 by luclopez         #+#    #+#             */
/*   Updated: 2022/08/29 18:57:31 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_get_size_dict(char *file_dict) // obtiene el tamaño del dict
{
	int		open_dict;
	int		size;
	char	*buffer;

	size = 0;
	open_dict = open(file_dict, O_RDONLY); //abrimos el dict en solo lectura 
	buffer = malloc(sizeof(char)); //creamos un char para leer el dict
	while (read(open_dict, buffer, 1)) //leemos el dict hasta el final para saber su longitud
		size++;
	free(buffer); //liberamos el char que hemos creado antes y devolvemos el tamaño
	return (size);
}

char	*ft_read_file(char *file_dict) // guarda el dict en un puntero 
{
	int		open_dict;
	int		file_size;
	char	*buffer;

	open_dict = open(file_dict, O_RDONLY); //abrimos el dict en solo lectura
	file_size = ft_get_size_dict(file_dict); //guardamos el tamaño del dict con la llamada que hemos hecho en la funcion de arriba
	buffer = malloc((file_size + 1) * sizeof(char)); //creamos un  puntero con la longitud del dict
	if (buffer == NULL || read(open_dict, buffer, file_size) == -1) //control de errores por si falla el open, malloc, etc
	{
		ft_putstr("Dict Error"); //si falla la funcion de arriba, valdrá nulo y si falla el read valdra -1
		return (NULL);
	}
	buffer[file_size] = '\0'; // devolvemos el puntero con el contenido del dict
	return (buffer); 
}
