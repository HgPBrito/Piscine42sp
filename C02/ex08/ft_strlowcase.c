/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:17:01 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/17 08:14:48 by hbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	unsigned int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'A' && str[cont] <= 'Z')
		{
			str[cont] = str[cont] + 32;
		}
		cont++;
	}
	return (str);
}
