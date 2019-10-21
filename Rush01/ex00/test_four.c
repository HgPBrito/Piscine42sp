/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 09:16:46 by mmurakam          #+#    #+#             */
/*   Updated: 2019/10/13 19:37:09 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test_four_col2(int **square, int *var);
void	test_four_line1(int **square, int *var);
void	test_four_line2(int **square, int *var);

void	test_four_col1(int **square, int *var)
{
	int line;
	int count;

	count = 0;
	line = 0;
	while (count < 4)
	{
		if (var[count] == 4)
		{
			square[line][0] = '1';
			square[line][1] = '2';
			square[line][2] = '3';
			square[line][3] = '4';
		}
		count++;
		line++;
	}
	test_four_col2(square, var);
}

void	test_four_col2(int **square, int *var)
{
	int line;
	int count;

	count = 4;
	line = 0;
	while (count < 8)
	{
		if (var[count] == 4)
		{
			square[line][0] = '4';
			square[line][1] = '3';
			square[line][2] = '2';
			square[line][3] = '1';
		}
		count++;
		line++;
	}
	test_four_line1(square, var);
}

void	test_four_line1(int **square, int *var)
{
	int col;
	int count;

	count = 8;
	col = 0;
	while (count < 12)
	{
		if (var[count] == 4)
		{
			square[0][col] = '1';
			square[1][col] = '2';
			square[2][col] = '3';
			square[3][col] = '4';
		}
		col++;
		count++;
	}
	test_four_line2(square, var);
}

void	test_four_line2(int **square, int *var)
{
	int col;
	int count;

	count = 12;
	col = 0;
	while (count < 16)
	{
		if (var[count] == 4)
		{
			square[0][col] = '4';
			square[1][col] = '3';
			square[2][col] = '2';
			square[3][col] = '1';
		}
		count++;
		col++;
	}
}
