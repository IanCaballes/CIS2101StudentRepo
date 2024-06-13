#ifndef stack_array
#define stack_array
#define MAX 10

typedef struct {
	int data[MAX];
	int top;
} Array;

void initStack(Array *s);
Array createStack();

bool push(Array *s, int elem);
bool pop(Array s);
int peek(Array s);

void display(Array s);
void visualize(Array s);

bool isEmpty(Array s);
bool isFull(Array s);

#endif
