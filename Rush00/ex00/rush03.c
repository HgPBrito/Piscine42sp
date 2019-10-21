/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:34:43 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/06 17:42:21 by lwarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	imprimir_03(int county, int countx, int x, int y)
{
	if ((county == 1 && countx == 1) || (county == y && countx == 1))
	{
		ft_putchar('A');
	}
	else if ((countx != 1 && countx != x) && (county == 1 || county == y))
	{
		ft_putchar('B');
	}
	else if ((countx == 1 || countx == x) && (county > 1 && county < y))
	{
		ft_putchar('B');
	}
	else if ((countx == x) && (county == 1 || county == y))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int county;
	int countx;

	county = 1;
	countx = 1;
	while (county <= y && x > 0)
	{
		while (countx <= x)
		{
			imprimir_03(county, countx, x, y);
			countx++;
		}
		countx = 1;
		write(1, "\n", 1);
		county++;
	}
}
