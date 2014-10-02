#ifndef Recursion_H
#define Recursion_H

typedef struct Node Node;

struct Node	{
	Node *left;
	Node *right;
	int data;
};

void printLinear(Node *root);
#endif // Recursion_H
