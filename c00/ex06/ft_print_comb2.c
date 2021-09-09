/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:03:58 by caniseed          #+#    #+#             */
/*   Updated: 2021/01/21 19:50:25 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	char d1;
	char d2;

	d1 = 0;
	while (d1 < 100)
	{
		d2 = d1 + 1;
		while (d2 < 100)
		{
			ft_putchar(d1 / 10 + '0');
			ft_putchar(d1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(d2 / 10 + '0');
			ft_putchar(d2 % 10 + '0');
			if (d1 < 98)
				ft_print_space();
			d2++;
		}
		d1++;
	}
}
