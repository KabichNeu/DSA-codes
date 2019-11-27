#ifndef QUEUE_H
#define QUEUE_H

#define MAX 7
class Queue{
    public:
        Queue();
        ~Queue();

        void enqueue(char ele);
        char dequeue();
        char front();
        char rear();
        bool isEmpty();
        bool isFull();
    private:
        char data[MAX];
        int Front;
        int Rear;
        char ele;
};

#endif