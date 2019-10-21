/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:28:30 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/10 09:52:24 by hbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_cont(int a);
void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_cont(int a)
{
	char uni;
	char dec;

	uni = (a / 10) + '0';
	dec = (a % 10) + '0';
	ft_putchar(uni);
	ft_putchar(dec);
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_cont(n1);
			ft_putchar(32);
			ft_cont(n2);
			if (!(n1 == 98 && n2 == 99))
			{
				ft_putchar(44);
				ft_putchar(32);
			}
			n2++;
		}
		n1++;
	}
}
