#include "hashing.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void initialize(Hashmap *arr, int size){
	int i;
	arr->size = size;
	arr->count = 0;
	arr->array = (NodePtr)malloc(sizeof(Node)*arr->size);
	printf("Hash map initialized!\n");
	for(i = 0; i < size; i++){
		arr->array[i] = NULL;
	}
}

int hashKey(int data, Hashmap arr){
	//int key;
	return data % arr.size;
}
void insertData(Hashmap *arr, int data, int key){
	NodePtr newnode = NULL;
	newnode = (NodePtr)malloc(sizeof(Node));
	
	newnode->data = data;
	newnode->key = key;
	newnode->next = NULL;
	
	if(isEmpty(&arr->array[key]) == true){
		printf("Position Empty!\n");
		arr->array[key] = newnode;
		arr->count++;
	}
	else{ //IF COLLISION
		//for(arr->array[key]; arr->array[key]->next != NULL; arr->array[key] = &arr->array[key]->next)
		printf("Collision Detected!\n");
		newnode->next = arr->array[key];
		arr->array[key] = newnode;
		arr->count++;
	}
}

void findData(Hashmap *array, int choice, int data, int key){
	if(choice == 1){ //if separate chaining
		//NEED TO TRAVERSE LINKED LIST FIRST
		printf("Data %d found in index [%d]\n", data, key);
	}
	
}

bool isEmpty(NodePtr * node){
if(*node == NULL){
        return true;
    }
    else{
        return false;
    }
}
