/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:43:10 by manugar2          #+#    #+#             */
/*   Updated: 2024/11/12 20:50:07 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main() {
    printf("%d\n", ft_str_is_uppercase("AIUHSIONOS"));     
    printf("%d\n", ft_str_is_uppercase("asdasfAAdsf"));
    printf("%d\n", ft_str_is_uppercase("asd%?SD"));     
    printf("%d\n", ft_str_is_uppercase(" SD W"));     

    return 0;
}
*/
