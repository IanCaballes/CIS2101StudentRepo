#include <stdio.h>
#include <stdlib.h>
#include "graphrep.h"

int main() {
	int matrix[MAX][MAX];
	NodePtr list[MAX];
	
	initialize(list, matrix);
	addEdge(list, matrix, 0, 1); //index 0 = A
	addEdge(list, matrix, 0, 2);
	addEdge(list, matrix, 0, 3);
	addEdge(list, matrix, 1, 0); //index 1 = B
	addEdge(list, matrix, 1, 2);
	addEdge(list, matrix, 1, 3);
	addEdge(list, matrix, 1, 4);
	addEdge(list, matrix, 2, 0); //index 2 = C
	addEdge(list, matrix, 2, 1);
	addEdge(list, matrix, 2, 3);
	addEdge(list, matrix, 3, 0); //index 3 = D
	addEdge(list, matrix, 3, 1);
	addEdge(list, matrix, 3, 2);
	addEdge(list, matrix, 3, 4);
	addEdge(list, matrix, 4, 1); //index 4 = E
	addEdge(list, matrix, 4, 3);
	
	printMatrix(matrix);
	printList(list);
}
