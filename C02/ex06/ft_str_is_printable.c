/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <luclopez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:57:36 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/23 16:56:15 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 127))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include<stdio.h>
int main(void)
{
	char	str[] = "<#";
	printf("%d", ft_str_is_printable(str));
}
*/
