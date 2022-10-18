/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <luclopez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:13:45 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/23 16:25:15 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src [i] != '\0' && (i < n))
	{
		dest [i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	dest[] = "Hello";
	char	src[] = "Bye";
	unsigned	int	n;
	n = 2;
	printf("%s\n", dest);
	ft_strncpy(dest, src, n);
	printf("%s", dest);
*/
