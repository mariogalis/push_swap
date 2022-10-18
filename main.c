/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:46:49 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/18 14:56:21 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printList(t_list **list,char opt)
{
	printf("LISTA %c:",opt);
	printf("\n");
	t_list *current_node = *list;
	while (current_node != NULL) 
	{
		printf("%d ", current_node->content);
		printf("\n");
		current_node = current_node->next;
	}
}

int	main(int argc, char *argv[])
{
	t_list	*stacka;
	t_list	*stackb;

	stacka = NULL;
	stackb = NULL;
	if (argc <= 1)
		display("WRONG NUMBER OF ARGUMENTS \n\n", 1, 'x');
	stacka = makelist(argc, argv);
	checkeverything(stacka);
	if (ft_lstsize(stacka) <= 5)
		sortsmol(&stacka, &stackb);
	else
	{
		printList(&stacka, 'a');
		exit(0);
		radix(&stacka, &stackb);
	}
	return (0);
}
