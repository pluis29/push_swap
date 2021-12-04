/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_end.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:15:41 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/12/04 00:15:41 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

t_node	*new_node(int numb)
{
	t_node	new;
	new = (t_node *)malloc(sizeof(t_node));
	new->next = NULL;
	new->data = numb;
	return (new);
}

int	check_list(t_node *node_bckp, int t_num)
{
	t_node	*temp;
	t_node	*head;

	temp = node_bckp;
	head = node_bckp;

	if(node_bckp->next == NULL)
		return (1);
	while (temp->next != NULL)
	{
		if (temp->data == t_num)
		{
			exit(EXIT_FAILURE);//limpar a stack
		}
		temp = temp->next;
	}
	return (1);
}