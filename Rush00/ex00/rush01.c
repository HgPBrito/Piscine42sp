/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 11:37:34 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/06 17:44:30 by lwarth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	imprimir_01(int start_y, int start_x, int y, int x)
{
	if ((start_y == 1 && start_x == 1) || (start_y == y && start_x == x))
	{
		ft_putchar(47);
	}
	else if ((start_y == 1 && start_x == x) || (start_y == y && start_x == 1))
	{
		ft_putchar(92);
	}
	else if ((start_y == 1 || start_y == y) && (start_x != 1 || start_x != x))
	{
		ft_putchar(42);
	}
	else if ((start_y != 1 || start_y != y) && (start_x == 1 || start_x == x))
	{
		ft_putchar(42);
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int start_x;
	int start_y;

	start_x = 1;
	start_y = 1;
	while (start_y <= y && x > 0)
	{
		while (start_x <= x)
		{
			imprimir_01(start_y, start_x, y, x);
			start_x++;
		}
		start_x = 1;
		write(1, "\n", 1);
		start_y++;
	}
}
