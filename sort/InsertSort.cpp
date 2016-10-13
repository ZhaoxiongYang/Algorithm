//
// Created by JackieChen on 16/10/13.
//

#include "InsertSort.h"
void InsertSort::sort(int *a, int length) {
    for(int i=1;i<length;i++){
        int tmp=a[i];
        for(int j=0;j<i;j++){
            if(tmp<a[j]){
                for(int k=i-1;k>=j;k--){
                    a[k+1]=a[k];
                }
                a[j]=tmp;
                break;
            }

        }
    }

}
