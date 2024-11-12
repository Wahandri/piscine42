/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:35:16 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/11/03 22:23:49 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	middle_rush(int x_, int y_, int col_, int row_)
{
	if ((col_ == 0 && row_ == 0) || (col_ == 0 && row_ == y_ - 1))
		ft_putchar('A');
	else if (col_ == x_ - 1 && row_ == 0)
		ft_putchar('C');
	else if (col_ == x_ - 1 && row_ == y_ - 1)
		ft_putchar('C');
	else if (row_ == 0 || row_ == y_ - 1 || col_ == 0 || col_ == x_ - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
	{
		write(1, "El valor dado es negativo", 30);
		return ;
	}
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			middle_rush(x, y, col, row);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
