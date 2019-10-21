/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 23:34:26 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/20 23:34:30 by hbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *result;

	result = dest;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (*dest != '\0' && n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}
