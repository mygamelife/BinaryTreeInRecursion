#include "unity.h"
#include "Recursion.h"

void setUp(void){}

void tearDown(void){}

void test_printLinear_Recursion(void)
{
	Node leftNode2 = {NULL, NULL, 7};
	Node leftNode1 = {&leftNode2, NULL, 8};
	Node rootNode = {&leftNode1, NULL, 10};
	
	printLinear(&rootNode);
}
