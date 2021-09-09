/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 20:05:30 by caniseed          #+#    #+#             */
/*   Updated: 2021/02/04 23:25:24 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *node;

	node = begin_list;
	while (begin_list != NULL)
	{
		node = begin_list;
		begin_list = begin_list->next;
	}
	return (node);
}
