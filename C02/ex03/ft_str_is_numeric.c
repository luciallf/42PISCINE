/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <luclopez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:22:00 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/23 16:35:37 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;
	int				a;

	a = 1;
	i = 0;
	while (str [i] != '\0')
	{
		if (!((str[i] >= '0') && (str[i] <= '9')))
			a = 0;
		i++;
	}
	return (a);
}

/*
int	main(void)
{
	char 	str [] = "123456789";
	printf("%d", ft_str_is_numeric(str));
} */
