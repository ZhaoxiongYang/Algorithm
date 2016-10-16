//
// Created by JackieChen on 16/10/15.
//

#include "CombSort.h"
void CombSort::swap(int *a, int first, int second) {
    if(first!=second){
        a[first]^=a[second];
        a[second]^=a[first];
        a[first]^=a[second];

    }

}
void CombSort::sort(int *a, int length) {
    int gap=length;
    bool flag=true;
    do{
       gap/=comb;
        if(gap<=1){
            gap=1;
            flag= false;
        }

        for(int i=0;i+gap<length;i++){
            if(a[i]>a[i+gap])
                swap(a,i,i+gap);
        }


    }while (gap>1 && flag);

}
