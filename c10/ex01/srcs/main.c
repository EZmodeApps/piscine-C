/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:01:09 by caniseed          #+#    #+#             */
/*   Updated: 2021/02/02 23:09:36 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	print_error(char *argv)
{
	ft_putstr("ft_cat: ");
	ft_putstr(basename(argv));
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		fd;
	char	*buf;
	int		i;

	i = 1;
	if ((argc < 2) || (argv[1][0] == '-'))
		ft_stdin();
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
			print_error(argv[i]);
		else if (read(fd, &buf, 1) < 0)
			print_error(argv[i]);
		else
		{
			write(1, &buf, 1);
			while (read(fd, &buf, 1))
				write(1, &buf, 1);
		}
		close(fd);
		i++;
	}
	return (0);
}
