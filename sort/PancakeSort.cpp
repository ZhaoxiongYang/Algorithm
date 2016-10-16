//
// Created by JackieChen on 16/10/13.
//

#include "PancakeSort.h"
void PancakeSort::flip(int *a, int position) {
    stack stack1(position+1);
    for(int i=0;i<=position;i++){
        stack1.push(a[i]);
    }
    for(int i=0;i<=position;i++){
        a[i]=stack1.pop();
    }

}
void PancakeSort::sort(int *a, int length) {
    for(int i=0;i<length-1;i++){
        int max=0;
        for(int j=1;j<length-i;j++){
            if(a[j]>a[max]){
                max=j;
            }
        }
        flip(a,max);
        flip(a,length-i-1);
    }
}
