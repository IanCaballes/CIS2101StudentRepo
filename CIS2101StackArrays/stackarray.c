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
    if(s.top == -1){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(Array s){
    if(s.top >= MAX){
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

bool pop(Array *s){
    if(isEmpty(*s) == false){
    	//s->data[s->top] = NULL;
        s->top--;    
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
    printf("[%d]: %d\n", peek(s), s.data[peek(s)]);
}

void visualize(Array s){
	Array tempstack = createStack();
	
	if(isEmpty(s) == false){
		push(&tempstack, s.data[peek(s)]);
		display(s);
		pop(&s);
		visualize(s);
	}
	
}

void stackEven(Array s){
	Array evenstack = createStack();
	Array tempstack = createStack();
	
	if(isEmpty(s) == false){
		if(s.data[peek(s)] % 2 == 0){
			printf("Even: %d\n", s.data[peek(s)]);
			push(&evenstack, s.data[peek(s)]);
			display(s);
			pop(&s);
			visualize(s);	
		}
		else{
			push(&tempstack, s.data[peek(s)]);
			//display(s);
			pop(&s);
			visualize(s);
		}
	}
	
}
