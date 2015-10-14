#include "test.h"

int TestCreateEmptyNode(){
	int result = 0;

	struct Node * node = CreateEmptyNode();

	if(sizeof(struct Node) != sizeof(*node)){
		printf("\nERROR@TestCreateEmptyNode: sizeof(struct node) != sizeof(*CreateEmptyNode()).\n");
		result ++;
	}
	if(node -> next != NULL){
		printf("\nERROR@TestCreateEmptyNode: node -> next != NULL.\n");
		result ++;
	}
	if(node -> data != INT_MIN){
		printf("\nERROR@TestCreateEmptyNode: node -> data != INT_MIN.\n");
		result ++;
	}

	return result;
}