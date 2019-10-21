/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_12.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:43:16 by mmurakam          #+#    #+#             */
/*   Updated: 2019/10/13 16:39:51 by afarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test_12_col2(int **square, int *var);
void	test_12_line1(int **square, int *var);
void	test_12_line2(int **square, int *var);

void	test_12_col1(int **square, int *var)
{
	int line;
	int count;

	count = 0;
	line = 0;
	while (count < 4)
	{
		if (var[count] == 1 && var[count + 4] == 2)
			square[line][3] = '3';
		line++;
		count++;
	}
	test_12_col2(square, var);
}

void	test_12_col2(int **square, int *var)
{
	int line;
	int count;

	count = 4;
	line = 0;
	while (count < 8)
	{
		if (var[count] == 1 && var[count - 4] == 2)
			square[line][0] = '3';
		line++;
		count++;
	}
	test_12_line1(square, var);
}

void	test_12_line1(int **square, int *var)
{
	int col;
	int count;

	count = 8;
	col = 0;
	while (count < 12)
	{
		if (var[count] == 1 && var[count + 4] == 2)
			square[3][col] = '3';
		col++;
		count++;
	}
	test_12_line2(square, var);
}

void	test_12_line2(int **square, int *var)
{
	int col;
	int count;

	count = 12;
	col = 0;
	while (count < 16)
	{
		if (var[count] == 1 && var[count - 4] == 2)
			square[0][col] = '3';
		col++;
		count++;
	}
}
