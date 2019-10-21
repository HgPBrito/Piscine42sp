/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:39:14 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/13 22:00:50 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_error_col(int **square);

void	ft_error_line(int **square)
{
	int l;

	l = 0;
	{
		while (l < 4)
		{
			if (!(square[l][0] != square[l][1] != square[l][2] != square[l][3]))
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			else if ((square[l][0] + square[l][1] +
				square[l][2] + square[l][3]) != 202)
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			l++;
		}
	}
	ft_error_col(square);
}

void	ft_error_col(int **square)
{
	int l;

	l = 0;
	{
		while (l < 4)
		{
			if (!(square[0][l] != square[1][l] != square[2][l] != square[3][l]))
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			else if ((square[0][l] + square[1][l] +
					square[2][l] + square[3][l]) != 202)
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			l++;
		}
	}
}
