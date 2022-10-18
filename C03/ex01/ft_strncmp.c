/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <luclopez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:24:02 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/29 10:04:39 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n -1)
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2 [i]);
}

/*#include<stdio.h>
#include<string.h>

int	main(void)
{
	char str1[] = "Hzzb";
	char str2[] = "Hola";

	int	nbr;
	nbr = 2;
	printf("Result: %d\n", ft_strncmp(str1, str2, nbr));
}*/
