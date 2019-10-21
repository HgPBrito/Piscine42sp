/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_one.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 12:16:27 by mmurakam          #+#    #+#             */
/*   Updated: 2019/10/13 16:21:42 by afarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test_one_col2(int **square, int *var);
void	test_one_line1(int **square, int *var);
void	test_one_line2(int **square, int *var);

void	test_one_col1(int **square, int *var)
{
	int line;
	int count;

	count = 0;
	line = 0;
	while (count < 4)
	{
		if (var[count] == 1)
			square[line][0] = '4';
		count++;
		line++;
	}
	test_one_col2(square, var);
}

void	test_one_col2(int **square, int *var)
{
	int line;
	int count;

	count = 4;
	line = 0;
	while (count < 8)
	{
		if (var[count] == 1)
			square[line][3] = '4';
		count++;
		line++;
	}
	test_one_line1(square, var);
}

void	test_one_line1(int **square, int *var)
{
	int col;
	int count;

	count = 8;
	col = 0;
	while (count < 12)
	{
		if (var[count] == 1)
			square[0][col] = '4';
		col++;
		count++;
	}
	test_one_line2(square, var);
}

void	test_one_line2(int **square, int *var)
{
	int col;
	int count;

	count = 12;
	col = 0;
	while (count < 16)
	{
		if (var[count] == 1)
			square[3][col] = '4';
		count++;
		col++;
	}
}
