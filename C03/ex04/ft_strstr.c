/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <luclopez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:29:24 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/29 10:05:38 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str [i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str [i + j] == to_find [j])
		{
			if (to_find [j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int	main(void)
{
	char *lstring = "Hola Cara asdfasd Caracola aefasd";
	char *sstring = "Caracola";
	char *ptr;

	ptr = strstr(lstring, sstring);

	printf("Large string : %s\n\n", lstring);
	printf("Short string: %s\n\n", sstring);
	printf("Command : %s\n", ptr);
	printf("Function : %s\n\n", ft_strstr(lstring, sstring));
}*/
