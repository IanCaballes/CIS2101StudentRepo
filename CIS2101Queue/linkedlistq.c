#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedlistq.h"

void enqueue(int data, NodePtr * head, NodePtr * rear){
	NodePtr newnode = NULL;
	newnode = malloc(sizeof(Node));
	
	newnode->data = data;
	newnode->next = *head;
	*head = newnode;
	if(isEmpty(rear) == true){
		*rear = newnode->next;
	}
}

void dequeue(NodePtr * head, NodePtr * rear){
	if(isEmpty(rear) == false){
		*rear = NULL;
		for(*head; *head != NULL; head = &(*head)->next){
		}
		free(head);
		*head = NULL;
		*rear = *head;
	}
}

bool isEmpty(NodePtr * rear){
    if(*rear == NULL){
        return true;
    }
    else{
        return false;
    }
}

void listNodes(Queue list){
	NodePtr temp = list.front;
    int count = 1;
    
    for(temp; temp != NULL; temp = temp->next){
        printf("[%d] %d\n", count, temp->data);
        count++;
    }
}
