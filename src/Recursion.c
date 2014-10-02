#include <stdio.h>
#include "Recursion.h"

void printLinear(Node *node)	{
	if(node != NULL)	{
		printLinear(node->left);
		printf("Node : %d\n" , node->data);
	}
}
