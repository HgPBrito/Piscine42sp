/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 20:50:59 by pcardoso          #+#    #+#             */
/*   Updated: 2019/10/06 17:36:14 by lwarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	imprimir_00(int county, int countx, int x, int y)
{
	if ((county == 1 && countx == 1) || (county == y && countx == 1))
	{
		ft_putchar('o');
	}
	else if ((countx != 1 && countx != x) && (county == 1 || county == y))
	{
		ft_putchar('-');
	}
	else if ((countx == 1 || countx == x) && (county > 1 && county < y))
	{
		ft_putchar('|');
	}
	else if ((countx == x) && (county == 1 || county == y))
	{
		ft_putchar('o');
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
			imprimir_00(county, countx, x, y);
			countx++;
		}
		countx = 1;
		write(1, "\n", 1);
		county++;
	}
}
