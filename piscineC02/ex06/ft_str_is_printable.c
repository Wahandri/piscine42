/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:50:42 by manugar2          #+#    #+#             */
/*   Updated: 2024/11/12 21:59:20 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
    printf("%d\n", ft_str_is_printable("asdsdfg"));     
    printf("%d\n", ft_str_is_printable("h	h"));
    printf("%d\n", ft_str_is_printable("asd%?"));     
    printf("%d\n", ft_str_is_printable(" dsf d"));     

    return 0;
}
*/
