/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:21:15 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/18 14:02:58 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	cont;

	cont = 0;
	while (cont < (size - 1))
	{
		if (tab[cont] > tab[cont + 1])
		{
			a = tab[cont];
			tab[cont] = tab[cont + 1];
			tab[cont + 1] = a;
			cont = 0;
		}
		else
		{
			cont++;
		}
	}
}
