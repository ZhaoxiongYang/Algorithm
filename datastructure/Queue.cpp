 //
// Created by JackieChen on 16/10/12.
//

#include "Queue.h"
Queue::Queue(int size) {
    this->size=size;
    a=new int[size];
    head=tail=0;
}
Queue::~Queue() {
    delete []a;
}
void Queue::enQueue(int num) {
    if(isFull())
        throw __EXCEPTIONS;
    a[tail]=num;
    tail=(tail+1)%size;
}
int Queue::deQueue() {
    if(isEmpty())
        throw __EXCEPTIONS;
    int result = a[head];
    head=(head+1)%size;
    return result;
}
int Queue::getSize() { return size;}
bool Queue::isFull() { return  head==(tail+1)%size;}
bool Queue::isEmpty() { return head==tail;}

