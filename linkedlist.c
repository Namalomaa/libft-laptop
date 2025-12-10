/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:30:26 by namaloma          #+#    #+#             */
/*   Updated: 2025/12/08 17:14:35 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

linkedlist_t *CreatLinkedList()
{
	linkedlist_t *newList = (linkedlist_t *)malloc(sizeof(linkedlist_t));
	newList -> head = NULL;
	return (newList);
}
void AppendToLinkedList(linkedlist_t *list, int data)
{
	if (list -> head == NULL)
	{
		node_t *newnode = (node_t *)malloc(sizeof(node_t));
		newnode -> data = data;
		newnode -> next = NULL;
		list -> head = newnode;
	}
	else
	{
		node_t *iter = list -> head;
		while (iter -> next != NULL)
		{
			iter = iter -> next;
		}
		node_t *newnode = (node_t *)malloc(sizeof(node_t));
		newnode -> data = data;
		newnode -> next = NULL;

		iter -> next = newnode;
	}

}
void	PrintLinkedList(linkedlist_t *list)
{
	node_t *iter = list -> head;
	while (iter != NULL)
	{
		printf("data :%d\n", iter -> data);
		iter = iter -> next;
	}
}
