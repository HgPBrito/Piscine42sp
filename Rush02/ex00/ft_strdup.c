/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 23:33:06 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/20 23:33:10 by hbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;

	size = ft_strlen(src);
	dest = (char *)malloc(size);
	return (ft_strncpy(dest, src, size + 1));
}
