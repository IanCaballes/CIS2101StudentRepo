#ifndef unionintersect
#include <stdio.h>
#define MAX 20

typedef struct {
	int array[MAX];
	int count;
	char set;
} Array;

void createSet(Array *array);
void insertVal(Array *array, int data);
void deleteVal(Array *array, int data);
Array findUnion(Array *array1, Array *array2);
Array findIntrsect(Array *array1, Array *array2);
void display(Array array);

#endif
