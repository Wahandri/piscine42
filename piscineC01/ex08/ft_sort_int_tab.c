/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:49:43 by manugar2          #+#    #+#             */
/*   Updated: 2024/11/11 18:46:34 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <unistd.h>
void	ft_print_tab(int *tab, int size)
{
	int	i;
	char	c;

	i = 0;
	while (i < size)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		if (i < size - 1)
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	int	tab[] = {5, 2, 9, 1, 5, 6};
	int	size = 6;

	write(1, "Antes de ordenar: ", 18);
	ft_print_tab(tab, size);
	ft_sort_int_tab(tab, size);
	write(1, "Después de ordenar: ", 20);
	ft_print_tab(tab, size);

	return (0);
}
*/
