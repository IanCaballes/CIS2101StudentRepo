#include <stdio.h>
#include <stdlib.h>
#include "hashing.h"

int main() {
	int choice1 = 0;
	int choice2 = 0;
	int input, key, size;
	NodePtr inputnode;
	Hashmap array;
	
	printf("1. Separate Chaining\n");
	printf("2. Linear Probing\n");
	printf("3. EXIT\n");
	scanf("%d", &choice1);
	
	if(choice1 == 1){
		printf("Enter size: \n");
		scanf("%d", &size);
		system("cls");
		initialize(&array, size);
		while(choice2 != 4){
			printf("1. Insert Data\n");
			printf("2. Delete Data\n");
			printf("3. Find Data\n");
			printf("4. Exit\n");
			printf("\nEnter choice: ");
			scanf("%d", &choice2);
			switch(choice2){
				case 1:
					printf("Enter data: ");
					scanf("%d", &input);
					
					key = hashKey(input, array);
					printf("Key: %d\n", key);
					
					insertData(&array, input, key);
					break;
				case 2:
					break;
				case 3:
					printf("Enter data: ");
					scanf("%d", &input);
					
					key = hashKey(input, array);
					printf("Key: %d\n", key);
					
					findData(&array, input, key);
					break;
				case 4:
					break;
			}
		}	
	}	
}
