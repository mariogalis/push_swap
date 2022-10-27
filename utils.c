/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:50:13 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/27 14:06:40 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display(char *str, int opt, char ab )
{
	int	len;

	len = ft_strlen(str);
	if (opt == 1)
	{
		write(1, "ERROR ", 6);
		write(2, str, len);
		write(1, "\n", 1);
		exit(0);
	}
	else
	{
		write(1, str, len);
		write(1, &ab, 1);
		write(1, "\n", 1);
	}
}

void	ft_free(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
		free(numbers[i++]);
	free(numbers);
}

int	findmin(t_list *stack)
{
	t_list	*min;
	int		lon;

	min = stack;
	lon = ft_lstsize(stack);
	while (lon != 0)
	{
		if (stack->content < min->content)
			min = stack;
		stack = stack->next;
		lon --;
	}
	return ((*min).content);
}

int	findmax(t_list *stacka)
{
	t_list	*max;

	max = stacka;
	while (stacka)
	{
		if (stacka->idx > max->idx)
			max = stacka;
		stacka = stacka->next;
	}
	return (max->idx);
}
