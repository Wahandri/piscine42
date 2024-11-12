/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 01:10:05 by manugar2          #+#    #+#             */
/*   Updated: 2024/11/06 01:23:08 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
#include <stdio.h>
int main()
{
    int x = 10;
    int y = 3;

    ft_ultimate_div_mod(&x, &y);

    printf("División: %d, Resto: %d\n", x, y);

    return 0;
}
*/
