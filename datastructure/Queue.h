//
// Created by JackieChen on 16/10/12.
//

#ifndef MYDATASTRUCTURE_QUEUE_H
#define MYDATASTRUCTURE_QUEUE_H


class Queue {
private:
    int head;
    int tail;
    int *a;
    int size;
public:
    Queue(int size);
    ~Queue();
    int getSize();
    void enQueue(int num);
    int deQueue();
    bool isFull();
    bool isEmpty();

};


#endif //MYDATASTRUCTURE_QUEUE_H
