/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:29:19 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/17 17:02:26 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int main (void)
{
	int c;
	int a;
	c = 5;
	a = 4;

	int *ptr1;
	int *ptr2;

	ptr1 = &c;
	ptr2 = &a;

	ft_swap(ptr1, ptr2)
	
}*/
