/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:50:20 by manugar2          #+#    #+#             */
/*   Updated: 2024/11/07 21:18:09 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main() {
    printf("%d\n", ft_str_is_numeric("12345"));     
    printf("%d\n", ft_str_is_numeric("1234a"));     
    printf("%d\n", ft_str_is_numeric(""));          
    printf("%d\n", ft_str_is_numeric("56789"));     
    printf("%d\n", ft_str_is_numeric("12 34"));     

    return 0;
}
*/
