/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 13:55:30 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/06 15:17:53 by hbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	imprimir_01(int start_y, int start_x, int y, int x)
{
	if ((start_y == 1 && start_x == 1) || (start_y == y && start_x == x))
	{
		ft_putchar(65);
	}
	else if ((start_y == 1 && start_x == x) || (start_y == y && start_x == 1))
	{
		ft_putchar(67);
	}
	else if ((start_y == 1 || start_y == y) && (start_x != 1 || start_x != x))
	{
		ft_putchar(66);
	}
	else if ((start_y != 1 || start_y != y) && (start_x == 1 || start_x == x))
	{
		ft_putchar(66);
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
	while (start_y <= y)
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
