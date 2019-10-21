/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:53:04 by afarini-          #+#    #+#             */
/*   Updated: 2019/10/13 22:33:31 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_4_3_middle(int **square);
void	ft_0_corner(int **square);
void	ft_4_middle(int **square);
void	ft_fill_blank(int **square);
void	test_12_col1(int **square, int *var);
void	fill_with_zeroes(int **square);
void	test_four_col1(int **square, int *var);
void	test_one_col1(int **square, int *var);
void	test_32_col1(int **square, int *var);
void	ft_malloc(int *var);
void	run_function(int *var, int **square);
void	test_241_col1(int **square, int *var);
void	test_242_col1(int **square, int *var);
void	test_243_col1(int **square, int *var);
void	test_341_col1(int **square, int *var);
void	test_342_col1(int **square, int *var);
void	test_343_col1(int **square, int *var);
void	ft_error_line(int **square);
void	print_matrix(int **square);
void	print_error();

int		ft_strlen(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count = count + 1;
		i++;
	}
	return (count);
}

int		main(int argc, char *argv[])
{
	int i;
	int c;
	int d;
	int var[16];

	i = 0;
	c = 0;
	d = 1;
	if (argc != 2)
		exit(0);
	while (i < 31)
	{
		if (argv[1][d] != ' ' || argv[1][i] < '1' ||
		argv[1][i] > '4' || ft_strlen(argv[1]) > 31)
			print_error();
		else
		{
			var[c] = argv[1][i] - 48;
			c++;
		}
		d = i + 1;
		i = i + 2;
	}
	ft_malloc(var);
}

void	ft_malloc(int *var)
{
	int **square;
	int i;

	i = 0;
	square = malloc(8 * sizeof(int));
	while (i < 4)
	{
		square[i] = malloc(4 * sizeof(int));
		i++;
	}
	run_function(var, square);
}

void	run_function(int *var, int **square)
{
	int i;

	fill_with_zeroes(square);
	i = 0;
	while (i++ < 7)
	{
		test_four_col1(square, var);
		test_one_col1(square, var);
		test_12_col1(square, var);
		test_32_col1(square, var);
		test_241_col1(square, var);
		test_242_col1(square, var);
		test_243_col1(square, var);
		test_341_col1(square, var);
		test_342_col1(square, var);
		test_343_col1(square, var);
		ft_fill_blank(square);
		ft_4_middle(square);
		ft_4_3_middle(square);
		ft_0_corner(square);
	}
	ft_error_line(square);
	print_matrix(square);
}
