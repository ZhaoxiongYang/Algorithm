//
// Created by JackieChen on 16/10/12.
//

#include "stack.h"
stack::stack(int size) {
    a=new int[size];
    this->size=size;
}
stack::~stack() {
    delete []a;
}
bool stack::isStackEmpty() {
    return top==0;
}
int stack::pop() {
    if (isStackEmpty()){
//        return -1;//error
        throw __EXCEPTIONS;
    }
    return a[--top];
}
void stack::push(int i) {
    if(top==size){
        throw __EXCEPTIONS;
//        return;
    }
    a[top++]=i;
}
int stack::getSize() {
    return size;
}

