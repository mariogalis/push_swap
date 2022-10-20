/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:01:11 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/20 15:02:02 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*maxaddr(t_list *stack)
{
	t_list	*max;
	int		lon;

	max = stack;
	lon = ft_lstsize(stack);
	while (lon != 0)
	{
		if (stack->content > max->content)
			max = stack;
		stack = stack->next;
		lon --;
	}
	return (max);
}

t_list	*minaddr(t_list *stack)
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
	return (min);
}

t_list	*min(t_list **stack, t_list * lstmin, int i)
{
	t_list * temp_min;
	t_list * temp;

	temp_min = maxaddr(*stack);
	temp = *stack;
	if (!lstmin)
	{
		lstmin = minaddr(*stack);
		lstmin->idx = i;
		return (lstmin);
	}
	while (temp)
	{
		if (temp->content > lstmin->content && temp->content < temp_min->content)
			temp_min = temp;
		temp = temp->next;
	}
	temp_min->idx = i;
	return(temp);
}

void	ft_index(t_list *stacka,t_list *stackb)
{
	int		i;
	int		lstsize;
	t_list	*lstmin;

	i = 0;
	lstsize = ft_lstsize(stacka);
	lstmin = NULL;
	while (i < lstsize)
	{
		lstmin = min(&stacka,lstmin,i);
		i++;
	}
	printList(&stacka, 'a');
	exit(1);
	radix (&stacka, &stackb);
}
