/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_zeroes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 09:19:03 by mmurakam          #+#    #+#             */
/*   Updated: 2019/10/13 15:16:36 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_with_zeroes(int **square)
{
	int line;
	int col;

	line = 0;
	col = 0;
	while (col < 4)
	{
		line = 0;
		while (line < 4)
		{
			square[col][line] = '0';
			line++;
		}
		col++;
	}
}
