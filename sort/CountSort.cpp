//
// Created by JackieChen on 16/10/13.
//

#include "CountSort.h"
void CountSort::sort(int *a, int length, int max) {
    int b[length];
    int c[max];
    for(int i=0;i<=max;i++){
        c[i]=0;
    }
    for(int i=0;i<length;i++){
        b[i]=0;
        c[a[i]]++;
    }
    for(int i=0;i<max;i++){
        c[i+1]=c[i+1]+c[i];
    }
    for(int i=length-1;i>=0;i--){
        b[--c[a[i]]]=a[i];

    }
    for(int i=0;i<length;i++){
        a[i]=b[i];
    }



}
