/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makeList.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:53:22 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/27 14:23:30 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*makelistaux(int argc, char *argv[], t_list *stacka)
{
	int	num;
	int	i;

	i = 1;
	while (i <= argc - 1)
	{
		if (checknums(argv[i]) == 0)
			display("ONLY NUMS PLEASE\n", 1, 'x');
		if (atoi(argv[i]) > INT_MAX || ft_strlen(argv[i]) > 11)
			display("ONLY NUMS PLEASE\n", 1, 'x');
		num = atoi(argv[i]);
		ft_lstadd_back(&stacka, ft_lstnew(num));
		i++;
	}
	return (stacka);
}

t_list	*makelist(int argc, char *argv[])
{
	t_list	*stacka;
	int		i;
	int		num;
	char	**nums;

	stacka = NULL;
	i = 1;
	if (argc == 2)
	{
		nums = ft_split(argv[1], ' ');
		onlynum(nums);
		num = atoi(nums[0]);
		stacka = ft_lstnew(num);
		while (nums[i] != NULL)
		{
			num = atoi(nums[i]);
			ft_lstadd_back(&stacka, ft_lstnew(num));
			i++;
		}
		ft_free(nums);
	}
	else if (argc > 2)
		stacka = makelistaux(argc, argv, stacka);
	return (stacka);
}

int	checknums(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			i++;
		if (ft_isdigit(s[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
