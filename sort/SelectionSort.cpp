//
// Created by JackieChen on 16/10/13.
//

#include "SelectionSort.h"
void SelectionSort::sort(int *a, int length) {
    for(int i=0;i<length-1;i++){
        int minLoc=i;
        for(int j=i+1;j<length;j++){
            if(a[j]<a[minLoc])
                minLoc=j;
        }
        if(i!=minLoc) {//important: if i==minLoc following code will make them zero
            a[i] ^= a[minLoc];
            a[minLoc] ^= a[i];
            a[i] ^= a[minLoc];
        }
    }
}
