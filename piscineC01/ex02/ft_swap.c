/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:22:59 by manugar2          #+#    #+#             */
/*   Updated: 2024/11/05 23:11:54 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int main(void)
{
	int a;
	int b;

	a = 10;
	b = 20;

	ft_swap(&a, &b);

	printf("%d\n", a);
	printf("%d\n", b);

	return (0);
}
*/
