#ifndef circularq

#include <stdbool.h>
#define MAX 10


typedef struct {
	int data[MAX];
	int front;
	int rear;
} CircularQ;

void initialize(CircularQ *array);
void enqueue(CircularQ *array, int data);
void dequeue(CircularQ *array);
bool isFull(CircularQ array);
bool isEmpty(CircularQ array);
void display(CircularQ array);

#endif
