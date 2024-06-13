#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackarray.h"
#define MAX 10

void initStack(Array *s){
	s->top = -1;
}

Array createStack(){
	Array newArray;
	initStack(&newArray);
	return newArray;
}

bool isEmpty(Array s){
	if(s.top > -1){
		return true;
	}
	else{
		return false;
	}
}

bool isFull(Array s){
	if(s.top < MAX){
		return true;	
	}
	else{
		return false;
	}
}

bool push(Array *s, int elem){
	if(isFull(*s) == false){
		s->top++;
		s->data[s->top] = elem;
		return true;	
	}
	else{
		return false;
	}
}

bool pop(Array s){
	if(isEmpty(s) == false){
		s.top--;	
		return true;
	}
	else{
		return false;
	}
}

int peek(Array s){
	return s.top;
}

void display(Array s){
	Array newstack = createStack();
	push(&newstack, s.data[s.top]);
}

void visualize(Array s){
}

