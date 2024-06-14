#ifndef queue
#include <stdbool.h>

typedef struct node {
	int data;
	struct node * next;
} Node, *NodePtr;

typedef struct {
	NodePtr front;
	NodePtr rear;
} Queue;

void enqueue(int data, NodePtr * head, NodePtr * rear);
void dequeue(NodePtr * head, NodePtr * rear);
bool isEmpty(NodePtr * rear);
void listNodes(Queue list);
#endif
