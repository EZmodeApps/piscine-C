/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:42:23 by caniseed          #+#    #+#             */
/*   Updated: 2021/01/29 23:21:53 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			number;
	int			*array;
	int			i;
	long int	length;

	number = min;
	length = (long int)max - (long int)min;
	if (min >= max)
		return (NULL);
	if ((array = (int*)malloc(sizeof(length))))
	{
		while (number < max)
		{
			array[i] = number;
			number++;
			i++;
		}
		return (array);
	}
	else
		return (NULL);
}
