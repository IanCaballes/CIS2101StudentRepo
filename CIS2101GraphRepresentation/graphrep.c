#include <stdio.h>
#include <stdlib.h>
#include "graphrep.h"

void initialize(NodePtr *list, int matrix[][MAX]){
	int i, j;
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			matrix[i][j] = 0;
		}
	}
	
	for(i = 0; i < MAX; i++){
		list[i] = NULL;
	}
}

void addEdge(NodePtr *list, int matrix[][MAX], int x, int y){
	NodePtr newnode = NULL;
	NodePtr temp;
	int row;
	newnode = (NodePtr)malloc(sizeof(Node));
	
	matrix[x][y] = 1;
	matrix[y][x] = 1;
	
	//still needs fixing
	if(y == 0){
		newnode->data = 'A';
		newnode->next = NULL;
	}
	else if(y == 1){
		newnode->data = 'B';
		newnode->next = NULL;
	}
	else if(y == 2){
		newnode->data = 'C';
		newnode->next = NULL;
	}
	else if(y == 3){
		newnode->data = 'D';
		newnode->next = NULL;
	}
	else if(y == 4){
		newnode->data = 'E';
		newnode->next = NULL;
	}
	
	if(list[x] == NULL){
		list[x] = newnode;
	}
	else{
        for (temp = list[x]; temp->next != NULL; temp = temp->next){
		}
        temp->next = newnode;
	}
}

void printMatrix(int matrix[][MAX]){
	int i, j;
	int chr = 65;
	printf("Adjacency Matrix: \n\t");
	
	for(i = 0; i < MAX; i++){
		printf("%c\t", chr++);
	}
	printf("\n");
	chr = 65;
	for(i = 0; i < MAX; i++){
		printf("%c\t", chr++);
		for(j = 0; j < MAX; j++){
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
}

void printList(NodePtr *list){
	NodePtr temp;
	int i;
	printf("Adjacency List: \n");
	for(i = 0; i < MAX; i++){
		printf("%c = { ", list[i]->data);
		for (temp = list[i]; temp->next != NULL; temp = temp->next){
			printf("%c ", temp->data);
		}
		printf("}\n");
	}
}
