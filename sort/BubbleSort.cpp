//
// Created by JackieChen on 16/10/13.
//

#include "BubbleSort.h"
#include "iostream"
void BubbleSort::sort(int *a,int length) {

    for(int i=0;i< length;i++){
        for(int j=0;j< length-i-1;j++){
            if(a[j]>a[j+1]){
                a[j]^=a[j+1];
                a[j+1]^=a[j];
                a[j]^=a[j+1];
            }

        }
    }
}
