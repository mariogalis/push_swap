/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:01:11 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/25 14:54:24 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*maxaddr(t_list *stack)
{
	t_list	*max;

	max = stack;
	while (stack)
	{
		if (stack->content > max->content)
			max = stack;
		stack = stack->next;
	}
	return (max);
}

t_list	*minaddr(t_list *stack)
{
	t_list	*min;

	min = stack;
	while (stack)
	{
		if (stack->content < min->content)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

t_list	*findnextmin(t_list *stack, t_list *last_min)
{
	t_list	*min;

	min = maxaddr(stack);
	if (!last_min)
		return (minaddr(stack));
	else if (last_min->content == min->content)
		return (NULL);
	while (stack)
	{
		if (stack->content < min->content && last_min->content < stack->content)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

t_list	*ft_index(t_list **stacka, t_list **stackb)
{
	int		i;
	t_list	*lstmin;
	t_list	*save;

	i = 0;
	save = *stacka;
	stackb = NULL;
	lstmin = *stacka;
	lstmin = minaddr(save);
	(lstmin)->idx = i;
	i = 1;
	while (i < ft_lstsize(save))
	{
		lstmin = findnextmin(save, lstmin);
		(lstmin)->idx = i;
		i++;
	}
	return (*stacka);
}
