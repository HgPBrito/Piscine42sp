/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 23:35:00 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/20 23:35:03 by hbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*generate_number(int nb)
{
	char *number;

	number = malloc(sizeof(char) * (nb + 1));
	ft_strncat(number, "1", 1);
	while (nb-- > 0)
		ft_strncat(number, "0", 1);
	return (number);
}
