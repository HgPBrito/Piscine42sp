/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:12:34 by mmurakam          #+#    #+#             */
/*   Updated: 2019/10/13 22:31:49 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	print_matrix(int **square)
{
	int		col;
	int		lin;
	char	esp;
	char	brk;

	brk = '\n';
	esp = ' ';
	col = 0;
	lin = 0;
	while (col < 4)
	{
		lin = 0;
		while (lin < 4)
		{
			write(1, &square[lin][col], 1);
			if (lin != 3)
				write(1, &esp, 1);
			lin++;
		}
		col++;
		write(1, &brk, 1);
	}
	free(square);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}
