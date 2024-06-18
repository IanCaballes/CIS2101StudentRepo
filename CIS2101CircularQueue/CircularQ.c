#include <stdio.h>
#include <stdlib.h>
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

int main(){
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
}

void initialize(CircularQ *array){
	array->front = -1;
	array->rear = -1;
}

void enqueue(CircularQ *array, int data){
	
	if(isFull(*array) == false){
		array->rear = (array->rear + 1) % MAX;
		array->data[array->rear] = data;
		printf("%d added\n", array->data[array->rear]);
	}
	
}

void dequeue(CircularQ *array){
	if(isEmpty(*array) == true){
		array->front++;
	}
}

bool isFull(CircularQ array){
	if((array.rear + 2) % MAX == array.front){
		printf("FULL || ");
		return true;
	}
	else{
		printf("NOT FULL ||");
		return false;
	}
}

bool isEmpty(CircularQ array){
	if((array.rear + 1) % MAX == array.front){
		printf("EMPTY\n");
		return true;
	}
	else{
		printf("NOT EMPTY\n");
		return false;
	}
}

void display(CircularQ array){
	int i;
	printf("Display ////////// Front: %d Rear: %d\n", array.front, array.rear);
	for(i = array.front; i != array.rear; i = (i + 1) % MAX){
		printf("[%d]: %d\n", i, array.data[i]);
	}
}
