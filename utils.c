/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:50:13 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/10 18:28:44 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display(char *str,int opt)
{
	int	len;

	len = ft_strlen(str);
	if(opt == 1)
	{
		write(1,"\n\tERROR :",10);
		write(2, str, len);
		exit(0);
	}
	else
		write(1, str, len);
	
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