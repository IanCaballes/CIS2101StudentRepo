#ifndef sjf
#define MAX 20

typedef struct {
	int letter;
	int bt;
	int at;
	int et;
	int wt;
	int tt;
} Process;

typedef struct {
	Process process[MAX];
	int count;
} Array;

void createProcess(Array *array, Process data);
void displayTable(Array array);
void findValues(Array *array);
Array sortFCFS(Array array);
void findAverageWT(Array array);
void findAverageTT(Array array);

#endif
