/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:46:49 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/12 14:50:43 by magonzal         ###   ########.fr       */
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

int	main (int argc, char *argv[])
{
	t_list *stackA = NULL;
	t_list *stackB = NULL;

	if(argc <= 1)
		display("WRONG NUMBER OF ARGUMENTS \n\n",1);
	stackA = makeList(argc,argv);
	checkeverything(stackA);
	
	if(ft_lstsize(stackA) <= 5)
		sortsmol(&stackA, &stackB);
	else
		radix(&stackA,&stackB);
	printList(&stackA,'A');
	return (0);
	
}