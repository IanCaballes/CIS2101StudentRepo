#include <stdio.h>
#include <stdlib.h>
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

int main(int argc, char *argv[]) {
	Queue list;
	list.front = NULL;
	list.rear = NULL;
	
	enqueue(1, &list.front, &list.rear);
	enqueue(2, &list.front, &list.rear);
	enqueue(3, &list.front, &list.rear);
	dequeue(&list.front, &list.rear);
	listNodes(list);
	return 0;
}

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


