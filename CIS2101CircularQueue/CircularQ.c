#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "CircularQ.h"

#define MAX 10

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
	else{
		printf("Enqueue Failed\n");
	}
	
}

void dequeue(CircularQ *array){
	if(isEmpty(*array) == true){
		array->front++;
	}
	else{
		printf("Dequeue Failed\n");
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
	if(array.data[(array.rear + 1) % MAX == array.front]){
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

