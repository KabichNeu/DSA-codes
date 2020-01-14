
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


class Queue{
	private:
		List l;
	public:
		void isEmpty(){
			bool a = l.isEmpty();
			if(a==true)
			std::cout<<"Queue Empty"<<std::endl;
			else
			std::cout<<"Queue Not Empty!"<<std::endl;
			
		}
		void enqueue(int data){
			l.addToHead(data);
		}
		void dequeue (){
			l.removeFromHead();
			
		}
		void showitems(){
			l.traverse();
		}
};


