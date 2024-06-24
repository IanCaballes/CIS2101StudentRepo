#include "sjf.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createProcess(Array *array, Process data){
	array->process[array->count] = data;
	array->count++;
}

void displayTable(Array array){
	int i;
	printf("#####################################\n");
	printf("PROCESS |  BT  |  AT  |  WT  |  TT  \n");
	for(i = 0; i < array.count; i++){
		printf("%c %11d %6d %6d %6d\n", array.process[i].letter, array.process[i].bt,  array.process[i].at, array.process[i].wt, array.process[i].tt);
	}
}

void sortShortest(Array array){
	int i, j, shortest;
	Process temp;
	
	for(i = 0; i < array.count - 1; i++){
		shortest = i;
		for(j = i + 1; j < array.count; j++){
			if(array.process[i].at < array.process[j].at){
				shortest = j;
				temp = array.process[shortest];
				array.process[shortest]= array.process[i];
				array.process[i] = temp;
			}
			else if(array.process[i].at == array.process[j].at){
				if(array.process[i].bt < array.process[j].bt){
					shortest = j;
				temp = array.process[shortest];
				array.process[shortest]= array.process[i];
				array.process[i] = temp;
				}
			}
		}
		
	}
}
