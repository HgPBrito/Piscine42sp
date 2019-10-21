/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 23:35:19 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/20 23:35:22 by hbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		has_error(char *argv)
{
	if (!ft_str_isnum(argv))
		return (1);
	if (ft_strlen(argv) >= 46)
		return (1);
	if (!has_a_file(DICTIONARY_PATH))
		return (1);
	return (0);
}
