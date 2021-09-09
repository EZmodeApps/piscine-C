/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 23:02:36 by caniseed          #+#    #+#             */
/*   Updated: 2021/01/28 21:10:44 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = argc - 1;
	j = 0;
	while (i > 0)
	{
		while (i < argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		j = '\0';
		ft_putchar('\n');
		i--;
	}
}
