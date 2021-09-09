/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 21:48:40 by caniseed          #+#    #+#             */
/*   Updated: 2021/02/04 23:04:45 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *node;
	t_list *end;

	if (*begin_list)
	{
		node = *begin_list;
		end = ft_create_elem(data);
		while (node->next != NULL)
			node = node->next;
		node->next = end;
	}
	else
		*begin_list = ft_create_elem(data);
}
