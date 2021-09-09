/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 23:42:02 by caniseed          #+#    #+#             */
/*   Updated: 2021/02/03 20:55:54 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tmp;

	i = 0;
	if (!(tmp = (int*)malloc(sizeof(length))))
		return (NULL);
	else
		while (i < length)
		{
			tmp[i] = f(tab[i]);
			i++;
		}
	return (tmp);
}
