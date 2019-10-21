/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarth <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 20:45:56 by lwarth            #+#    #+#             */
/*   Updated: 2019/10/06 17:41:50 by lwarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	imprimir_02(int conty, int contx, int y, int x)
{
	if (conty == 1 && (contx == 1 || contx == x))
	{
		ft_putchar('A');
	}
	else if (conty == y && (contx == 1 || contx == x))
	{
		ft_putchar('C');
	}
	else if ((conty == 1 || conty == y) && (contx != 1 || contx != x))
	{
		ft_putchar('B');
	}
	else if ((conty != 1 || conty != y) && (contx == 1 || contx == x))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int conty;
	int contx;

	conty = 1;
	contx = 1;
	while (conty <= y && x > 0)
	{
		while (contx <= x)
		{
			imprimir_02(conty, contx, y, x);
			contx++;
		}
		contx = 1;
		write(1, "\n", 1);
		conty++;
	}
}
