/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:01:45 by manugar2          #+#    #+#             */
/*   Updated: 2024/11/10 20:26:43 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = '0';
	while (a1 <= '9')
	{
		a2 = '0';
		while (a2 <= '9')
		{
			b1 = a1;
			while (b1 <= '9')
			{
				if (b1 == a1)
					b2 = a2 + 1;
				else
					b2 = '0';
				while (b2 <= '9')
				{
					write(1, &a1, 1);
					write(1, &a2, 1);
					write(1, " ", 1);
					write(1, &b1, 1);
					write(1, &b2, 1);
					if (!(a1 == '9' && a2 == '8' && b1 == '9' && b2 == '9'))
						write(1, ", ", 2);
					b2++;
				}
				b1++;
			}
			a2++;
		}
		a1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

