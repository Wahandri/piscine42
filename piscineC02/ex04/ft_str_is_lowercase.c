/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:32:16 by manugar2          #+#    #+#             */
/*   Updated: 2024/11/12 20:42:19 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
    printf("%d\n", ft_str_is_lowercase("asdsdfg"));     
    printf("%d\n", ft_str_is_lowercase("asdasfAAdsf"));
    printf("%d\n", ft_str_is_lowercase("asd%?"));     
    printf("%d\n", ft_str_is_lowercase(" dsf d"));     

    return 0;
}
*/
