#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node {
	int data;
	struct Node * next;
};

struct Node * CreateEmptyNode();