#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "Queue.h"
using namespace std;
Queue::Queue(int capacity)
{
    front1=-1;
    rear=-1;
    size1=capacity;
    queue1 = new int(size1);
}

bool Queue::isEmpty(){
return front1 == -1;
}
bool Queue::isFull(){
return rear == size1 -1;
}

void Queue::enqueue(int value){
    if(isFull()){
        cout<<"Queue esta lleno"<<endl;
        return;
    }
    if(front1==-1){
        front1 = 0;
    }
    queue1[++rear] = value;
    cout<<value<<"enqueue to queue"<<endl;
}

void Queue::dequeue(){
if(isEmpty()){

    cout<<"empty queue"<<endl;
    return;
}
cout<<queue1[front1]<<"dequeue front"<<endl;
front1++;
if(front1>rear){
    front1 = -1;
    rear = -1;

}
}
int Queue::frontElement(){

if(isEmpty()){
        cout<<"Empty queue"<<endl;
return -1;
}
return queue1[front1];
}
Queue::~Queue()
{
    delete[] queue1;
}
