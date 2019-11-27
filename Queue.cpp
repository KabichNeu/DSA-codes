#include<iostream>
#include "queue.h"
Queue::Queue(){
    	Front=-1;
	Rear=-1;
}
Queue::~Queue(){
}
void Queue::enqueue(char ele){
	if(isFull()) std::cout<<"cannot enqueue"<<"  " << ele<<" ,Queue overflow \n";
	else{
		Rear++;
		data[Rear]=ele;
	}
}
char Queue::dequeue(){
	if(isEmpty()) std::cout<<"Queue is empty, Queue underflow \n";
	else {
		Front++;
		char val=data[Front];
		return val;
	}
}
char Queue::rear(){
	if(isEmpty()) std::cout<<"Queue is empty, Queue underflow \n";
	else {
		return data[Rear];
	}

}
bool Queue::isEmpty(){
	if(Rear==Front) {
		std::cout<<"queue is empty";
		return true;
	}
	else return false;
}
bool Queue::isFull(){
	if(Rear>=MAX-1){
		std::cout<<"queue is full";
		return true;
	}
	else return false;
}
char Queue::front(){
	if(isEmpty()) std::cout<<"Queue is empty, Queue underflow \n";
	else {
		return data[Front];
	}

}

int main(){
	Queue a;
	a.enqueue('A');
	a.enqueue('B');
    	a.enqueue('C');
    	a.enqueue('D');
	a.enqueue('E');
    	a.enqueue('F');
    	a.enqueue('G');
	a.enqueue('H');
	std::cout<<a.dequeue();
    	std::cout<<std::endl;
	std::cout<<a.dequeue();
    	std::cout<<std::endl;
    	std::cout<<a.front();
    	std::cout<<std::endl;
    	std::cout<<a.rear();
    	std::cout<<std::endl;
    	std::cout<<a.isEmpty();
    	std::cout<<std::endl;
    	std::cout<<a.isFull();
    	std::cout<<std::endl;
}