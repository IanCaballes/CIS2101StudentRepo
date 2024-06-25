#include <stdio.h>
#include <stdlib.h>
#include "hashing.h"

int main() {
	int choice = 0;
	int input, key;
	Hashmap array;
	initialize(&array);
	
	while(choice != 4){
		printf("1. Insert Data\n");
		printf("2. Delete Data\n");
		printf("3. Find Data\n");
		printf("4. Exit\n");
		printf("\nEnter choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Enter data: ");
				scanf("%d", &input);
				
				key = hashKey(input, array);
				printf("Key: %d", key);
				
		}
	}
	
}
