/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 00:55:03 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/16 11:00:56 by hbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int cont_p;
	int cont_n;
	int temp;

	cont_p = 0;
	cont_n = size - 1;
	while (cont_p < cont_n)
	{
		temp = tab[cont_p];
		tab[cont_p] = tab[cont_n];
		tab[cont_n] = temp;
		cont_p++;
		cont_n--;
	}
}
