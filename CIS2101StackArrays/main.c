#include <stdio.h>
#include <stdlib.h>
#include "stackarray.c"

int main() {
	int num;
	int choice = 0;
	Array stack = createStack();
	
	while(choice != 4){
		printf("\n1. Push\n");
		printf("2. Pop\n");
		printf("3. Display Stack\n");
		printf("4. Exit\n");	
		printf("\nEnter choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				fflush(stdin);
				printf("Enter value: ");
				scanf("%d", &num);
				
				push(&stack, num);
				break;
			case 2:
				pop(stack);
				break;
			
			case 3:

				break;
				
			case 4:
				break;
				
		}
	}
	
}
