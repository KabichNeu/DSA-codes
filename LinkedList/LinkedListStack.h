
#include<iostream>
class Node{
	 public:
	int info;
	Node* next;
};

class List{
	private:
		Node* HEAD;
		Node* TAIL;
		public:
		List();
		~List();
	
		//functions
		
		bool isEmpty();
		void addToHead(int data);
		void addToTail(int data);
		int removeFromHead();

		void traverse();
		int itemHead();
};
class Stack{
	private:
		List l;
	public:
		void isEmpty(){
			bool a = l.isEmpty();
			if(a==true)
			std::cout<<"Stack Empty"<<std::endl;
			else
			std::cout<<"Stack Not Empty!"<<std::endl;
		}
		void push(int data){
			l.addToHead(data);
		}
		int top(){
			return l.itemHead();
			
			
		}
		int pop(){
			l.removeFromHead();
		}
			
			
		
};


