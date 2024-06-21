#include <stdio.h>
#include <stdlib.h>
#include "unionintersect.h"

int main() {
	int choice = 0;
	int i, tmax, input;
	char findset;
	Array A, B;
	Array Union, Intersect;
	while(choice != 6){
		system("cls");
		printf("1: Add sets\n");
		printf("2: Insert value\n");
		printf("3: Delete value\n");
		printf("4: Display Union\n");
		printf("5: Display Intersection\n");
		printf("6: Exit\n");
		printf("\nEnter choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("#####################################\n");
				createSet(&A);
				createSet(&B);
				system("pause");
				break;
			case 2:
				printf("#####################################\n");
				printf("Enter set: ");
				scanf(" %c", &findset);
				
				if(findset == A.set){
					if(A.count >= MAX){
						printf("Set is full\n");
					}
					else{
						printf("Enter value to add: ");
						scanf("%d", &input);
						insertVal(&A, input);
					}
				}
				else if(findset == B.set){
					if(B.count >= MAX){
						printf("Set is full\n");
					}
					else{
						printf("Enter value to add: ");
						scanf("%d", &input);
						insertVal(&B, input);
					}
				}
				else{
					printf("Could not find set!\n");
				}
				system("pause");
				break;
			case 3:
				printf("#####################################\n");
				printf("Enter set: ");
				scanf(" %c", &findset);
				
				if(findset == A.set){
					display(A);
					printf("Enter value to delete: ");
					scanf("%d", &input);
					deleteVal(&A, input);
					
				}
				else if(findset == B.set){
					display(B);
					printf("Enter value to delete: ");
					scanf("%d", &input);
					deleteVal(&B, input);
				}
				else{
					printf("Could not find set!\n");
				}
				system("pause");
				break;
			case 4:
				Union = findUnion(&A, &B);
				display(Union);
				system("pause");
				break;
			case 5:
				Intersect = findIntrsect(&A, &B);
				display(Intersect);
				system("pause");
				break;
				
			case 6:
				break;
		}
	}
}
