/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:38:32 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/11 16:40:00 by hbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_verif_end(char a, char b, char c);
void	ft_print_comb(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_verif_end(char a, char b, char c)
{
	if (!(a == 55 && b == 56 && c == 57))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char n_1;
	char n_2;
	char n_3;

	n_1 = 48;
	while (n_1 <= 55)
	{
		n_2 = n_1 + 1;
		while (n_2 <= 56)
		{
			n_3 = n_2 + 1;
			while (n_3 <= 57)
			{
				ft_putchar(n_1);
				ft_putchar(n_2);
				ft_putchar(n_3);
				ft_verif_end(n_1, n_2, n_3);
				n_3++;
			}
			n_2++;
		}
		n_1++;
	}
}
