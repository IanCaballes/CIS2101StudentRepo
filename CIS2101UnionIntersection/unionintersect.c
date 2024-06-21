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
				array->array[j] = array->array[j+1];
			}
			array->count--;	
		}
	}
}

Array findUnion(Array *array1, Array *array2){
	Array newarray;
	int i = 0, j = 0, x = 0;
	
	newarray.count = 0;
	newarray.set = 'U';
	
	for(i = 0; i < array1->count; i++){
		newarray.array[j] = array1->array[i];
		j++;
		newarray.count++;
	}
	
	i = array1->count;
	for(i = 0; i < array2->count; i++){
		newarray.array[j] = array2->array[i];
		j++;
		newarray.count++;
	}
	
	for(i = 0; i < newarray.count; i++){
		for(j = i+1; j < newarray.count; j++){
			if(newarray.array[i] == newarray.array[j]){
				for(x = j; x < newarray.count; x++){
					newarray.array[x] = newarray.array[x+1];
				}
				newarray.count--;	
			}
		}
	}
	
	return newarray;
}

Array findIntrsect(Array *array1, Array *array2){
	Array newarray;
	int i = 0, j = 0;
	
	newarray.count = 0;
	newarray.set = 'I';
	
	for(i = 0; i < array1->count; i++){
		for(j = 0; j < array2->count; j++){
			if(array1->array[i] == array2->array[j]){
				newarray.array[newarray.count] = array2->array[j];
				newarray.count++;	
			}
		}
	}
	
	return newarray;
}

void display(Array array){
	int i;
	for(i = 0; i < array.count; i++){
		printf("[%d]: %d\n", i, array.array[i]);
	}
}


