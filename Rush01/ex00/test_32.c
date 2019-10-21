/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_32.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 12:17:17 by mmurakam          #+#    #+#             */
/*   Updated: 2019/10/13 19:35:45 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test_32_col2(int **square, int *var);
void	test_32_line1(int **square, int *var);
void	test_32_line2(int **square, int *var);

void	test_32_col1(int **square, int *var)
{
	int line;
	int count;

	count = 0;
	line = 0;
	while (count < 4)
	{
		if (var[count] == 3 && var[count + 4] == 2)
			square[line][2] = '4';
		count++;
		line++;
	}
	test_32_col2(square, var);
}

void	test_32_col2(int **square, int *var)
{
	int line;
	int count;

	count = 4;
	line = 0;
	while (count < 8)
	{
		if (var[count] == 3 && var[count - 4] == 2)
			square[line][1] = '4';
		count++;
		line++;
	}
	test_32_line1(square, var);
}

void	test_32_line1(int **square, int *var)
{
	int col;
	int count;

	count = 8;
	col = 0;
	while (count < 12)
	{
		if (var[count] == 3 && var[count + 4] == 2)
			square[2][col] = '4';
		col++;
		count++;
	}
	test_32_line2(square, var);
}

void	test_32_line2(int **square, int *var)
{
	int col;
	int count;

	count = 12;
	col = 0;
	while (count < 16)
	{
		if (var[count] == 3 && var[count - 4] == 2)
			square[1][col] = '4';
		count++;
		col++;
	}
}
