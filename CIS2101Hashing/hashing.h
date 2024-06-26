#ifndef hashing
#include <stdbool.h>
#define MAX 10

typedef struct node{
	int data;
	int key;
	struct node *next;
}Node, *NodePtr;

typedef struct{
	NodePtr * array;
	int size;
	int count;
}Hashmap;

void initialize(Hashmap *arr, int size);
int hashKey(int data, Hashmap arr);
void insertData(Hashmap *arr, int data, int key);
bool isEmpty(NodePtr * node);
#endif
