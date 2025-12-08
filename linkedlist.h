/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:31:06 by namaloma          #+#    #+#             */
/*   Updated: 2025/12/08 16:23:51 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LINKED_LIST_H
#define LINKED_LIST_H
// indivisual node in the chain
typedef struct node
{
	int data1;
	struct node *next;
}node_t;

//Linked list data structure , which ALWAYS 
//holds the first node in the chain

typedef struct linkedlist
{
	node_t *head;//hold a pointer to what ever the first node is
}linked_list_t;

// malloc a new linkedlist then
// return a pointer to that linked list

linkedlist_t *	CreatLinkedListOffiveItems();

//print all nodes

void printLinkedList(linkedlist_t *list);

//Walk through the linked list and delete all node

void FreeLinkedList(linkedlist_t *list);


//creat a new node_t and add to the end of linkedlist_t
void AppendToLinkedList(linkedlist_t *list, int data);

#endif
