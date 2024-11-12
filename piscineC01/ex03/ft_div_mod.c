/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:17:30 by manugar2          #+#    #+#             */
/*   Updated: 2024/11/06 00:42:54 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 5;
    int division;
    int resto;

    ft_div_mod(a, b, &division, &resto);

    printf("División: %d, Resto: %d\n", division, resto);

    return 0;
}
*/
