//
// Created by JackieChen on 16/10/12.
//

#ifndef MYDATASTRUCTURE_STACK_H
#define MYDATASTRUCTURE_STACK_H


class stack {
private:
    int size;
    int top=0;
    int *a;
public:
    stack(int size);
    ~stack();
    bool isStackEmpty();
    void push(int i);
    int pop();
    int getSize();



};


#endif //MYDATASTRUCTURE_STACK_H
