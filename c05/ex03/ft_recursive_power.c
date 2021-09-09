/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:31:28 by caniseed          #+#    #+#             */
/*   Updated: 2021/01/27 15:53:45 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int result;

	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}
