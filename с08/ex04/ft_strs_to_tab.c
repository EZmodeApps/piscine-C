/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 23:05:13 by caniseed          #+#    #+#             */
/*   Updated: 2021/01/30 23:50:13 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i;
	int length;
	char *copy;

	i = 0;
	length = ft_strlen(src);
	if ((copy = (char*)malloc(sizeof(length + 1))))
	{
		while(src[i])
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
	else
		return (NULL);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	char *copy;
	int i;
	t_stock_str ez;

	i = 0;
	if (!(ez == (t_stock_str*)malloc(sizeof(ez) * (ac + 1)))
		return (NULL);
	else
		while(i < ac)
		{
			ez[i].size = ft_strlen(av[i]);
			ez[i].str = av[i];
			ez[i].copy = ft_strdup(av[i]);
            free;
			i++;
		}
		ez[i].str = 0;
		return (ez);
}
