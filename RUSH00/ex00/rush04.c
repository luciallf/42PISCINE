/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luclopez <luclopez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:23:45 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/14 16:23:18 by luclopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	uniqueline(int r1, int c1, int x, int y);

void	uniqueline(int r1, int c1, int x, int y)
{
	if (r1 == 1 && c1 == 1)
	{
		ft_putchar('A');
	}
	else if ((r1 != y && x == 1) || (c1 != x && y == 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar('C');
	}
}

void	check(int r1, int c1, int x, int y);

void	check(int r1, int c1, int x, int y)
{
	if (x == 1 | y == 1)
	{
		uniqueline(r1, c1, x, y);
	}
	else if (((r1 == 1 && c1 == 1) | (r1 == y && c1 == x)))
	{
		ft_putchar('A');
	}
	else if ((r1 == 1 && c1 == x) | (r1 == y && c1 == 1))
	{
		ft_putchar('C');
	}
	else if ((r1 == 1) | (r1 == y))
	{
		ft_putchar('B');
	}
	else if ((r1 != 1) && (r1 != y) && ((c1 == 1) | (c1 == x)))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y);

void	rush(int x, int y)
{
	int	r1;
	int	c1;

	r1 = 1;
	c1 = 1;
	if (x > 0 && y > 0)
	{
		while (r1 <= y)
		{
			while (c1 <= x)
			{
				check(r1, c1, x, y);
				c1++;
			}
			ft_putchar('\n');
			c1 = 1;
			r1++;
		}
	}
}
