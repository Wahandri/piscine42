/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:45:23 by manugar2          #+#    #+#             */
/*   Updated: 2024/11/06 19:21:25 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char frase[] = "Hello world";
	char destino[] = "****************";

	printf("Copiando: %s\n", frase);
	printf("Vacio: %s\n", destino);

	ft_strcpy(destino, frase);

	printf("Copia: %s\n", destino);

	return (0);
}
*/
