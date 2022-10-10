/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:46:49 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/10 18:33:10 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printList(t_list *list)
{
	printf("LISTA :");
	printf("\n");
	t_list *current_node = list;
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
	t_list *stackB = ft_lstnew(6);

	if(argc <= 1)
		display("WRONG NUMBER OF ARGUMENTS \n\n",1);
	stackA = makeList(argc,argv);
	checkeverything(stackA);
	printList(stackA);
	printList(stackB);
	//sortsmol(&stackA);
	printList(stackA);
	return (0);
}