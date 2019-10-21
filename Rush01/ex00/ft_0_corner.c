/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_0_corner.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 11:54:29 by afarini-          #+#    #+#             */
/*   Updated: 2019/10/13 22:44:31 by mmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_0_corner2(int **square);

void	ft_0_corner(int **square)
{
	if (square[0][0] == '0' &&
		(square[0][1] != square[1][0]) &&
		(square[0][1] == '1' || square[0][1] == '3' || square[0][1] == '4') &&
		(square[0][2] == '1' || square[0][2] == '3' || square[0][2] == '4') &&
		(square[1][0] == '1' || square[1][0] == '3' || square[1][0] == '4') &&
		(square[2][0] == '1' || square[2][0] == '3' || square[2][0] == '4'))
		square[0][0] = '2';
	if (square[0][3] == '0' &&
		(square[0][2] != square[1][3]) &&
		(square[0][1] == '1' || square[0][1] == '3' || square[0][1] == '4') &&
		(square[0][2] == '1' || square[0][2] == '3' || square[0][2] == '4') &&
		(square[1][3] == '1' || square[1][3] == '3' || square[1][3] == '4') &&
		(square[2][3] == '1' || square[2][3] == '3' || square[2][3] == '4'))
		square[0][3] = '2';
	if (square[0][0] == '0' &&
		(square[0][1] != square[1][0]) &&
		(square[0][1] == '2' || square[0][1] == '3' || square[0][1] == '4') &&
		(square[0][2] == '2' || square[0][2] == '3' || square[0][2] == '4') &&
		(square[1][0] == '2' || square[1][0] == '3' || square[1][0] == '4') &&
		(square[2][0] == '2' || square[2][0] == '3' || square[2][0] == '4'))
		square[0][0] = '1';
	ft_0_corner2(square);
}

void	ft_0_corner2(int **square)
{
	if (square[0][3] == '0' &&
		(square[0][2] != square[1][3]) &&
		(square[0][1] == '2' || square[0][1] == '3' || square[0][1] == '4') &&
		(square[0][2] == '2' || square[0][2] == '3' || square[0][2] == '4') &&
		(square[1][3] == '2' || square[1][3] == '3' || square[1][3] == '4') &&
		(square[2][3] == '2' || square[2][3] == '3' || square[2][3] == '4'))
		square[0][3] = '1';
	if (square[0][0] == '0' &&
		(square[0][1] != square[1][0]) &&
		(square[0][1] == '1' || square[0][1] == '2' || square[0][1] == '4') &&
		(square[0][2] == '1' || square[0][2] == '2' || square[0][2] == '4') &&
		(square[1][0] == '1' || square[1][0] == '2' || square[1][0] == '4') &&
		(square[2][0] == '1' || square[2][0] == '2' || square[2][0] == '4'))
		square[0][0] = '3';
	if (square[0][3] == '0' &&
		(square[0][2] != square[1][3]) &&
		(square[0][1] == '1' || square[0][1] == '2' || square[0][1] == '4') &&
		(square[0][2] == '1' || square[0][2] == '2' || square[0][2] == '4') &&
		(square[1][3] == '1' || square[1][3] == '2' || square[1][3] == '4') &&
		(square[2][3] == '1' || square[2][3] == '2' || square[2][3] == '4'))
		square[0][3] = '3';
}
