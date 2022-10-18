/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:31:52 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/18 14:02:13 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	a;

	cont = 0;
	while (cont != (size / 2))
	{
		a = tab[cont];
		tab[cont] = tab[size - 1 - cont];
		tab[size -1 - cont] = a;
		cont++;
	}
}
