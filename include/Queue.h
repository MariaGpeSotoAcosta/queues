#ifndef QUEUE_H
#define QUEUE_H
using namespace std;

class Queue
{
    private:
        int front1;
        int rear;
        int size1;
        int* queue1;



    public:
        Queue(int capacity);
        bool isEmpty();
        bool isFull();
        void enqueue(int value);
        void dequeue();
        int frontElement();
        ~Queue();
};

#endif // QUEUE_H
