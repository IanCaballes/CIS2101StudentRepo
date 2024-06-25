#include "fcfs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createProcess(Array *array, Process data){
	array->process[array->count] = data;
	array->count++;
}

void displayTable(Array array){
	int i;
	printf("###########################################\n");
	printf("PROCESS |  BT  |  AT  |  ET  |  WT  |  TT  \n");
	for(i = 0; i < array.count; i++){
		printf("%c %11d %6d %6d %6d %6d\n", array.process[i].letter, array.process[i].bt,  array.process[i].at, array.process[i].et, array.process[i].wt, array.process[i].tt);
	}
}

Array sortFCFS(Array array){
	int i, j, shortest;
	Array FCFS = array;
	Process temp;
	
	for(i = 0; i < FCFS.count - 1; i++){
		shortest = i;
		for(j = i + 1; j < FCFS.count; j++){
			if(FCFS.process[i].at > FCFS.process[j].at){
				shortest = j;
				temp = FCFS.process[shortest];
				FCFS.process[shortest]= FCFS.process[i];
				FCFS.process[i] = temp;
			}
		}
	}
	return FCFS;
}

void findValues(Array *array){
	int i;
	
	for(i = 0; i < array->count; i++){
		if(i == 0){
			array->process[i].et = array->process[i].at;
			array->process[i].wt = array->process[i].et;
			array->process[i].tt = array->process[i].bt;
		}
		else{
			array->process[i].et = array->process[i-1].tt;
			array->process[i].tt = array->process[i].bt + array->process[i-1].tt;
			array->process[i].wt = (array->process[i-1].at + array->process[i-1].bt + array->process[i-1].wt) - array->process[i].at;
		}
	}
}

void findAverageWT(Array array){
	int i, twt;
	float awt;
	for(i = 0; i < array.count; i++){
		twt += array.process[i].wt;
	}
	awt = twt / array.count;
	printf("Total WT --------------------|  %d\n", twt);
	printf("Average WT ------------------|  %.1f\n", awt);
}

void findAverageTT(Array array){
	int i, ttt;
	float att;
	for(i = 0; i < array.count; i++){
		ttt += array.process[i].tt;
	}
	att = ttt / array.count;
	printf("Total TT ---------------------------|  %d\n", ttt);
	printf("Average TT -------------------------|  %.1f\n", att);
}
