/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 23:55:50 by caniseed          #+#    #+#             */
/*   Updated: 2021/02/03 20:56:45 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
