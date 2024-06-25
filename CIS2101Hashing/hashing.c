#include "hashing.h"
#include <stdio.h>
#include <stdlib.h>

void initialize(Hashmap *arr){
	arr->size = 65;
	arr->count = 0;
	arr->array = (NodePtr)malloc(sizeof(Node)*arr->size);
	printf("Hash map initialized!\n");
}

int hashKey(int data, Hashmap arr){
	//int key;
	return data % arr.size;
}
void insertData(Hashmap *arr, NodePtr input){
	
}


