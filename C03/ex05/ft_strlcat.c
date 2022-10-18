/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:44:24 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/29 10:05:53 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	res;

	a = 0;
	b = 0;
	res = 0;
	while (dest[a] != '\0')
		a++;
	while (src[res])
		res++;
	if (size <= a)
			res += size;
	else
		res += a;
	while (src [b] && (a + 1) < size)
	{
		dest [a] = src [b];
		a++;
		b++;
	}
	dest [a] = '\0';
	return (res);
}
/*#include<stdio.h>
#include<string.h>
int	main(void)
{
	char str1[5] = "LUCIA", str2 [100] = "LOPEZ";
	printf("The result is: %u \n\n", ft_strlcat(str2, str1, sizeof(str2)));
}*/
