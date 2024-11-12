/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 02:09:19 by manugar2          #+#    #+#             */
/*   Updated: 2024/11/11 18:29:08 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
#include <stdio.h>
int main()
{
	int array[] = {5, 4, 3, 2, 1, 0, -1, -2, -3, -4};
	int size = 10;

	ft_rev_int_tab(array, size);
	
	int i = 0;
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");

	return (0);
}
*/
