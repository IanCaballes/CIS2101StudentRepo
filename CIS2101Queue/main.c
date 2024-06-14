#include <stdio.h>
#include <stdlib.h>
#include "linkedlistq.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Queue list;
	list.front = NULL;
	list.rear = NULL;
	
	enqueue(1, &list.front, &list.rear);
	enqueue(2, &list.front, &list.rear);
	enqueue(3, &list.front, &list.rear);
	//dequeue(&list.front, &list.rear);
	listNodes(list);
	return 0;
}
