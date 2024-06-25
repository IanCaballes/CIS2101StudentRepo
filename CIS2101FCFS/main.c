#include <stdio.h>
#include <stdlib.h>
#include "fcfs.h"

int main() {
	int i, n;
	int letter = 65;
	Array processes;
	Array FCFS;
	Process input;
	
	processes.count = 0;
	
	printf("Enter amount of process to add: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("Process %c\n", letter);
		
		printf("Arrival Time: ");
		scanf("%d", &input.at);
		
		printf("Burst Time: ");
		scanf("%d", &input.bt);
		
		input.wt = 0;
		input.tt = 0;
		input.et = 0;
		input.letter = letter++;
		
		printf("\n");
		createProcess(&processes, input);
	}
	FCFS = sortFCFS(processes);
	findValues(&FCFS);
	displayTable(FCFS);
	findAverageWT(FCFS);
	findAverageTT(FCFS);
	printf("###########################################\n");
}
