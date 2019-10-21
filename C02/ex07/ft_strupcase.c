/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:40:35 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/17 14:41:11 by hbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	unsigned int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'a' && str[cont] <= 'z')
		{
			str[cont] = str[cont] - 32;
		}
		cont++;
	}
	return (str);
}
