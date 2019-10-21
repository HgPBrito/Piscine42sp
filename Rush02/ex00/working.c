/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   working.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 23:39:24 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/20 23:39:29 by hbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	working(char *str)
{
	char			*raw;
	char			*c1;
	char			*c2;
	t_dictionary	**dict;

	raw = load_file(DICTIONARY_PATH);
	c1 = remove_dup_char(raw, "\t\r\v\n ");
	c2 = remove_dup_char(c1, " ");
	dict = str_to_dictionary(c2);
	if (ft_strlen(str) != count_char(str, '0'))
		implicit_algorithm(dict, str);
	else
		guri(dict, "0");
	ft_putstr("\n");
}
