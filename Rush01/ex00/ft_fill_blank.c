/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_blank.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 12:13:36 by afarini-          #+#    #+#             */
/*   Updated: 2019/10/13 19:37:55 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fill_blank2(int **square);
void	ft_fill_blank3(int **square);
void	ft_fill_blank4(int **square);

void	ft_fill_blank(int **square)
{
	int		count;
	int		line;
	int		col;

	count = 0;
	line = 0;
	while (count++ < 4)
	{
		if (square[line][0] != '0' && square[line][1] != '0' &&
		square[line][2] != '0')
			square[line][3] = '0' + '0' + '0' + '0' + 10 - square[line][0]
			- square[line][1] - square[line][2];
		line++;
	}
	col = 0;
	while (count++ < 8)
	{
		if (square[0][col] != '0' && square[1][col] != '0' &&
		square[2][col] != '0')
			square[3][col] = '0' + '0' + '0' + '0' + 10 - square[0][col]
			- square[1][col] - square[2][col];
		count++;
	}
	ft_fill_blank2(square);
}

void	ft_fill_blank2(int **square)
{
	int count;
	int line;
	int col;

	count = 0;
	line = 0;
	while (count++ < 4)
	{
		if (square[line][0] != '0' && square[line][1] != '0' &&
		square[line][3] != '0')
			square[line][2] = '0' + '0' + '0' + '0' + 10 - square[line][0]
			- square[line][1] - square[line][3];
		line++;
	}
	col = 0;
	while (count++ < 8)
	{
		if (square[0][col] != '0' && square[1][col] != '0' &&
		square[3][col] != '0')
			square[2][col] = '0' + '0' + '0' + '0' + 10 - square[0][col]
			- square[1][col] - square[3][col];
		col++;
	}
	ft_fill_blank3(square);
}

void	ft_fill_blank3(int **square)
{
	int count;
	int line;
	int col;

	count = 0;
	line = 0;
	while (count++ < 4)
	{
		if (square[line][0] != '0' && square[line][2] != '0' &&
		square[line][3] != '0')
			square[line][1] = '0' + '0' + '0' + '0' + 10 - square[line][0]
			- square[line][2] - square[line][3];
		line++;
	}
	col = 0;
	while (count++ < 8)
	{
		if (square[0][col] != '0' && square[2][col] != '0' &&
		square[3][col] != '0')
			square[1][col] = '0' + '0' + '0' + '0' + 10 - square[0][col]
			- square[2][col] - square[3][col];
		col++;
	}
	ft_fill_blank4(square);
}

void	ft_fill_blank4(int **square)
{
	int count;
	int line;
	int col;

	count = 0;
	line = 0;
	while (count++ < 4)
	{
		if (square[line][1] != '0' && square[line][2] != '0' &&
		square[line][3] != '0')
			square[line][0] = '0' + '0' + '0' + '0' + 10 - square[line][1]
			- square[line][2] - square[line][3];
		line++;
	}
	col = 0;
	while (count++ < 8)
	{
		if (square[1][col] != '0' && square[2][col] != '0' &&
		square[3][col] != '0')
			square[0][col] = '0' + '0' + '0' + '0' + 10 - square[1][col]
			- square[2][col] - square[3][col];
		col++;
	}
}
