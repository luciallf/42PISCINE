/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <luclopez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:53:24 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/23 16:20:26 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest [i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include<stdio.h>
 
 int	main()
 {
 	char	src [] = "HOLAMUNDO";
	char	dest [] = "HOLAMUNDO2";

	ft_strcpy(dest,src);
	printf("%s", dest);
	return (0);
 }
 */
