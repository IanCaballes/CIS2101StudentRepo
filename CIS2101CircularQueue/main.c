#include <stdio.h>
#include <stdlib.h>
#include "CircularQ.h"

int main() {
	CircularQ array;
	int data;
	
	initialize(&array);
	enqueue(&array, 2);
	enqueue(&array, 6);
	enqueue(&array, 5);
	enqueue(&array, 9);
	enqueue(&array, 8);
	enqueue(&array, 1);
	enqueue(&array, 7);
	enqueue(&array, 3);
	enqueue(&array, 0);
	enqueue(&array, 3);
	
	display(array);
	
	dequeue(&array);
	dequeue(&array);
	dequeue(&array);
	display(array);
	
}
