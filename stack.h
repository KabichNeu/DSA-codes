#ifndef STACK_H
#define STACK_H

#define MAX_STACK_SIZE 100

class stack {
public:
	stack();
	~stack();

	void push(int element);
	int pop();
	int Top();
	bool isEmpty();

private:
	int elements[MAX_STACK_SIZE];
	int top;
};

#endif
