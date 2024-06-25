#ifndef sjf
#define MAX 20

typedef struct {
	int letter;
	int bt;
	int at;
	int wt;
	int tt;
} Process;

typedef struct {
	Process process[MAX];
	int count;
} Array;

void createProcess(Array *array, Process data);
void displayTable(Array array);
void sortShortest(Array array);

#endif
