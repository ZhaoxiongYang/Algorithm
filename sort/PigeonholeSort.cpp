//
// Created by JackieChen on 16/10/13.
//

#include "PigeonholeSort.h"
void PigeonholeSort::sort(int *a, int length) {
    int min=a[0],max=a[0];
    for(int i=1;i<length;i++){
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    int holes[max-min+1];
    for(int i=0;i<max-min+1;i++){
        holes[i]=0;
    }
    for(int i=0;i<length;i++){
        holes[a[i]-min]++;
    }
    int j=0;
    for(int i=0;i<max-min+1;){
        if(holes[i]>0){
            a[j++]=i+min;
            holes[i]--;
        } else{
            i++;
        }

    }


}
