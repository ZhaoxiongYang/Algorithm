//
// Created by JackieChen on 16/10/15.
//

#include "Min.h"
int Min::min(int *a, int length) {
    int minVal=a[0];
    for(int i=1;i<length;i++){
        if(a[i]<minVal)
            minVal=a[i];
    }
    return minVal;
}
