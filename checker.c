/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:50:26 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/31 12:37:03 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isinorder(t_list *aux)
{
	t_list	*head;

	head = aux;
	while (head->next != NULL)
	{
		if (head->content > head->next->content)
			return (1);
		head = head->next;
	}
	return (0);
}

void	repeated(t_list *aux)
{
	t_list	*head;

	while (aux->next != NULL)
	{
		head = aux->next;
		while (head != NULL)
		{
			if (aux->content == head->content)
				display(" REPEATED\n", 1, 'x');
			head = head->next;
		}
		aux = aux->next;
	}
}

void	onlynum(char **nums)
{
	int	i;
	int	j;

	i = 0;
	while (nums[i])
	{
		j = 0;
		while (nums[i][j])
		{
			if (atoi(nums[i]) > INT_MAX || (ft_isnumber(nums[i])) == 0)
			{
				ft_free(nums);
				display(" ONLY NUMS PLEASE\n", 1, 'x');
			}
			j++;
		}
		i++;
	}
}

int	ft_isnumber(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (ft_isdigit(*str++) == 0)
			return (0);
	}
	return (1);
}

void	checkeverything(t_list *aux)
{
	repeated(aux);
	if (isinorder(aux) == 0)
		display("IS IN ORDER YOU MORRON\n", 1, 'x');
}
