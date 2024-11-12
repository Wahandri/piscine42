/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:49:58 by manugar2          #+#    #+#             */
/*   Updated: 2024/11/06 20:29:51 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main() {
    printf("%d\n", ft_str_is_alpha("Hello"));      
    printf("%d\n", ft_str_is_alpha("Hello123"));   
    printf("%d\n", ft_str_is_alpha(""));           
    printf("%d\n", ft_str_is_alpha("HolaMundo"));  
    printf("%d\n", ft_str_is_alpha("C++"));        

    return 0;
}
*/
