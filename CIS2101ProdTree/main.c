#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main() {
	int choice = 0;
	Product input;
    NodePtr node;
    initialize(node);
    
    while(choice != 7){
    	system("cls");
        printf("\n1. Add Product\n");
        printf("2. Delete Product\n");
        printf("3. Breadth First Traverse\n");
        printf("4. Depth First PreOrder Traverse\n");    
        printf("5. Depth First InOrder Traverse\n");   
        printf("6. Depth First PostOrder Traverse\n");    
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                fflush(stdin);
                printf("No root detected!\n");
                printf("Enter product name: ");
                gets(input.prodName);
                printf("Enter price: ");
                scanf("%f", &input.prodPrice);
                printf("Enter quantity: ");
                scanf("%d", &input.prodQty);
                printf("Enter date (dd): ");
                scanf("%d", &input.expDate.day);
                printf("Enter date (mm): ");
                scanf("%d", &input.expDate.month);
                printf("Enter date (yyyy): ");
                scanf("%d", &input.expDate.year);
                
				addProd(input, &node);
                system("pause");
                break;
            case 2:
                
                system("pause");
                break;
            
            case 3:
				
				system("pause");
                break;
                
            case 4:
            	
            	system("pause");
                break;
                
            case 5:
            	break;
            	
            case 6:
            	break;
            
            default:
            	break;
        }
    }
}
