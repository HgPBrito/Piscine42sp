/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 01:52:00 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/15 06:50:09 by hbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int cont;
	int temp;

	cont = 0;
	while (cont < size)
	{
		if (tab[cont] > tab[cont + 1])
		{
			temp = tab[cont + 1];
			tab[cont + 1] = tab[cont];
			tab[cont] = temp;
			cont = 0;
		}
		else
		{
			cont++;
		}
	}
}
