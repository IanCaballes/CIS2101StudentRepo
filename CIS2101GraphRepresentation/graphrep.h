#ifndef graphrep
#define MAX 5

typedef struct node{
	char data;
	struct node *next;
}Node, *NodePtr;

void initialize(NodePtr *list, int matrix[][MAX]);
void addEdge(NodePtr *list, int matrix[][MAX], int x, int y);
void printMatrix(int matrix[][MAX]);
void printList(NodePtr *list);

#endif
