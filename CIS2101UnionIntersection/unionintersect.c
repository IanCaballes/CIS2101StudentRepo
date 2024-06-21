#include "unionintersect.h"

void createSet(Array *array){
	int tmax;
	int i;
	char set;
	array->count = 0;
	
	printf("Enter set name:\n");
	scanf(" %c", &set);
	array->set = set;
	
	printf("How many values for set %c? (MAX 10): \n", array->set);
	scanf("%d", &tmax);
	
	printf("Enter values for set %c:\n", array->set);
	for(i = 0; i < tmax; i++){
		printf("[%d]: ", array->count);
		array->count++;
		scanf("%d", &array->array[i]);
	}
}

void insertVal(Array *array, int data){
	array->array[array->count] = data;
	array->count++;
}

void deleteVal(Array *array, int data){
	int i, j;
	for(i = 0; i < MAX; i++){
		if(array->array[i] == data){
			for(j = i; j < array->count; j++){
				array->array[i] = array->array[j+1];
				i++;
			}
		array->count--;	
		}
	}
}

Array findUnion(Array *array1, Array *array2){
	int size1 = sizeof(array1) / sizeof(array1->array[0]);
	int size2 = sizeof(array2) / sizeof(array2->array[0]);
	Array newarray;
	
	int i = 0, j = 0;
	
	for(i = 0; i < array1->array[array2->count]; i++){
		newarray.array[i] = array1->array[i];
	}
	
	i = array1->count;
	for(j = 0; j < array2->array[array2->count]; j++){
		newarray.array[i] = array2->array[j];
		i++;
	}
}

Array findIntrsect(Array *array1, Array *array2){
	
}

void display(Array array){
	int i;
	for(i = 0; i < array.count; i++){
		printf("[%d]: %d\n", i, array.array[i]);
	}
}


