#include "linkedlist.h"

int main ()
{
	linkedlist_t	*newlist = CreatLinkedList();
	AppendToLinkedList(newlist, 1);
	AppendToLinkedList(newlist, 2);
	AppendToLinkedList(newlist, 3);
	AppendToLinkedList(newlist, 4);
	PrintLinkedList(newlist);
	return 0;
}
