/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:46:49 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/05 17:49:57 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printList(t_list *list)
{
	printf("LISTA :");
	t_list *current_node = list;
	while ( current_node != NULL) 
	{
		printf("%d ", current_node->content);
		current_node = current_node->next;
	}
	printf("\n");
}



int main (int argc, char *argv[])
{
	t_list *stackA;
	t_list *stackB = ft_lstnew(0);

	stackB->content = 12;
	if(argc <= 1)
		display("WRONG NUMBER OF ARGUMENTS");
	stackA = makeList(argc,argv);
	//printList(stackA);
	return (0);
}