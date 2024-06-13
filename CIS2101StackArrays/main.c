#include <stdio.h>
#include <stdlib.h>
#include "stackarray.c"

int main() {
    int num;
    int choice = 0;
    Array stack = createStack();
    
    while(choice != 5){
    	system("cls");
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Visualize\n");
        printf("4. Move Even numbers\n");    
        printf("5. Exit\n");   
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                fflush(stdin);
                printf("Enter value: ");
                scanf("%d", &num);
                
                push(&stack, num);
                display(stack);
                system("pause");
                break;
            case 2:
                pop(&stack);
                display(stack);
                system("pause");
                break;
            
            case 3:
				visualize(stack);
				system("pause");
                break;
                
            case 4:
            	stackEven(stack);
            	system("pause");
                break;
                
            case 5:
            	break;
        }
    }
    
}
