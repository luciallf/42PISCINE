/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <luclopez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 08:26:38 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/29 10:04:25 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
			i++;
	return (s1[i] - s2[i]);
}

/*#include<stdio.h>
int	main (void)
{
	char	s1[] = "Hola";
	char	s2[] = "Hola";

	printf("%d/n", ft_strcmp(s1, s2));
} */
