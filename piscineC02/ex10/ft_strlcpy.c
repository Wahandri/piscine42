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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "Hello, world!";
	char	dest[20];
	int	result;

	result = ft_strlcpy(dest, src, 10);
	printf("Fuente: %s\n", src);
	printf("Destino: %s\n", dest);
	printf("Longitud de fuente: %u\n", result);
	return (0);
}
*/
