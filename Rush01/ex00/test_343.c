/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_343.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:48:28 by mmurakam          #+#    #+#             */
/*   Updated: 2019/10/13 21:38:50 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test_343_col2(int **square, int *var);
void	test_343_line1(int **square, int *var);
void	test_343_line2(int **square, int *var);

void	test_343_col1(int **square, int *var)
{
	int lin;
	int c;

	c = 0;
	lin = 0;
	while (c < 4)
	{
		if (var[c] == 3 && square[lin][2] == '4' && square[lin][3] == '3')
		{
			square[lin][0] = '1';
			square[lin][1] = '2';
		}
		else if (var[c] == 3 && square[lin][2] == '3' && square[lin][3] == '4')
		{
			square[lin][0] = '2';
			square[lin][1] = '1';
		}
		lin++;
		c++;
	}
	test_343_col2(square, var);
}

void	test_343_col2(int **square, int *var)
{
	int lin;
	int c;

	c = 4;
	lin = 0;
	while (c < 8)
	{
		if (var[c] == 3 && square[lin][1] == '4' && square[lin][0] == '3')
		{
			square[lin][3] = '1';
			square[lin][2] = '2';
		}
		else if (var[c] == 3 && square[lin][1] == '3' && square[lin][0] == '4')
		{
			square[lin][3] = '2';
			square[lin][2] = '1';
		}
		lin++;
		c++;
	}
	test_343_line1(square, var);
}

void	test_343_line1(int **square, int *var)
{
	int col;
	int c;

	c = 8;
	col = 0;
	while (c < 12)
	{
		if (var[c] == 3 && square[2][col] == '4' && square[3][col] == '3')
		{
			square[0][col] = '1';
			square[1][col] = '2';
		}
		else if (var[c] == 3 && square[2][col] == '3' && square[3][col] == '4')
		{
			square[0][col] = '2';
			square[1][col] = '1';
		}
		col++;
		c++;
	}
	test_343_line2(square, var);
}

void	test_343_line2(int **square, int *var)
{
	int col;
	int c;

	c = 12;
	col = 0;
	while (c < 16)
	{
		if (var[c] == 3 && square[1][col] == '4' && square[0][col] == '3')
		{
			square[3][col] = '1';
			square[2][col] = '2';
		}
		else if (var[c] == 3 && square[1][col] == '3' && square[0][col] == '4')
		{
			square[3][col] = '2';
			square[2][col] = '1';
		}
		col++;
		c++;
	}
}
