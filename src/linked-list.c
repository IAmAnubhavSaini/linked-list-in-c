#include "linked-list.h"

struct Node * CreateEmptyNode()
{
	struct Node * tmp = (struct Node *) malloc (sizeof(struct Node));
	tmp -> next = NULL;
	tmp -> data = INT_MIN;
	return tmp;
}