/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:07:38 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/12 16:25:03 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	bit_size(int lstsize)
{
	int	nbr_bits;

	nbr_bits = 0;
	while (lstsize > 0)
	{
		lstsize /= 2;
		nbr_bits++;
	}
	return (nbr_bits);
}

void	radix(t_list **stackA, t_list **stackB)
{
	int	bit;
	int	i;
	int	size;
	int	nbr_bits;

	size = ft_lstsize(*stackA);
	bit = 0;
	nbr_bits = bit_size(ft_lstsize(*stackA));
	while (bit < nbr_bits)
	{
		i = 0;
		while (i++ < size)
		{
			if (((*stackA)->content >> bit) % 2 == 0)
				push(stackA, stackB, 'b');
			else
				rotate(stackA, 'a');
		}
		while (*stackB)
			push(stackB, stackA, 'a');
		bit++;
	}
}