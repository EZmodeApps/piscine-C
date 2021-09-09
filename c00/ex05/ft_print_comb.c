/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 09:31:15 by caniseed          #+#    #+#             */
/*   Updated: 2021/01/21 16:46:57 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_separate_numbers(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_number(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_print_comb(void)
{
	char numbers[3];

	numbers[0] = '0';
	while (numbers[0] <= '7')
	{
		numbers[1] = numbers[0] + 1;
		while (numbers[1] <= '8')
		{
			numbers[2] = numbers[1] + 1;
			while (numbers[2] <= '9')
			{
				if (numbers[0] < numbers[1] && numbers[1] < numbers[2])
				{
					ft_print_number(numbers[0], numbers[1], numbers[2]);
					if (!(numbers[0] == '7' && numbers[1] == '8' &&
							numbers[2] == '9'))
						ft_separate_numbers();
				}
				numbers[2]++;
			}
			numbers[1]++;
		}
		numbers[0]++;
	}
}
