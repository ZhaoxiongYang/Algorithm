//
// Created by JackieChen on 16/10/15.
//

#include "Max.h"
int Max::max(int *a, int length) {
    int maxVal=a[0];
    for(int i=1;i<length;i++){
        if(a[i]>maxVal)
            maxVal=a[i];
    }
    return maxVal;
}
