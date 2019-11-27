#include "stack.h"
#include<iostream>
using namespace std;

stack::stack() {
	top = -1;
}

stack::~stack() {}

void stack::push(int element) {
	if (top >= MAX_STACK_SIZE - 1) {
		cout << "Cannot push" << element << ". Stack overflow." << endl;
	}
	else {
		top++;
		this->elements[top] = element;
	}
}

int stack::pop() {
	if (isEmpty()) { 
		cout << "stack underflow";
		return -1;
	}
	else {
		return elements[top--];
	}
}

int stack::Top() {
	if (isEmpty())	cout << "stack underflow" << endl;
	else return elements[top];
}

bool stack::isEmpty() {
	if (top < 0)	return true;
	else 		return false;
}


int main() {
	stack s;
	s.push(8);
	s.push(4);
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	s.push(3);
	s.push(2);
	cout << s.pop() << endl;
	cout << s.pop() << endl;
}