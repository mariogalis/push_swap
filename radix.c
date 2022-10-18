/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:07:38 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/18 14:16:41 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	bit_size(int lstsize)
{
	int	nbr_bits;

	nbr_bits = 0;
	while (lstsize > 0)
	{
		lstsize = lstsize / 2;
		nbr_bits++;
	}
	return (nbr_bits);
}

void	radix(t_list **stacka, t_list **stackb)
{
	int	bit;
	int	i;
	int	size;
	int	nbr_bits;

	size = ft_lstsize(*stacka);
	bit = 0;
	nbr_bits = bit_size(findmax(*stacka));
	while (bit < nbr_bits)
	{
		i = 0;
		while (i < size)
		{
			if (((*stacka)->content >> bit) % 2 == 0)
				push(stacka, stackb, 'b');
			else
				rotate(stacka, 'a');
			i++;
		}
		while (*stackb)
			push(stackb, stacka, 'a');
		bit++;
	}
}
