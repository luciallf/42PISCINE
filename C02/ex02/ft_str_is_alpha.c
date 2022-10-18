/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:38:19 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/23 16:36:52 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (((str[i] >= 'a') && (str [i] <= 'z'))
			| ((str [i] >= 'A' ) && (str [i] <= 'Z')))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "";
	printf("%d", ft_str_is_alpha(str));
} */
