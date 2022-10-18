/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:42:47 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/17 10:42:07 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int main(void)
{
	int	number;
	number = 5;
	int *pointer; 
	pointer = &number;
	ft_ft(pointer);
	printf("%d", *pointer);
} */
