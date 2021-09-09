/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:49:21 by caniseed          #+#    #+#             */
/*   Updated: 2021/01/29 23:33:08 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;
	int	*array;

	i = 0;
	length = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(array = (int *)malloc(sizeof(*array) * length)))
		return (-1);
	else
	{
		while (min < max)
		{
			array[i] = min;
			min++;
			i++;
		}
	}
	*range = array;
	return (i);
}
