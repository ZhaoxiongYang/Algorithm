//
// Created by JackieChen on 16/10/13.
//

#include "InsertSort.h"
void InsertSort::sort(int *a, int length) {
    for(int i=1;i<length;i++){
        int tmp=a[i];
        //following not a good implementation
//        for(int j=0;j<i;j++){
//            if(tmp<a[j]){
//                for(int k=i-1;k>=j;k--){
//                    a[k+1]=a[k];
//                }
//                a[j]=tmp;
//                break;
//            }
//
//        }
        //following a better implementatin from Introduction to Algorithm
        int j=i-1;
        while (j>=0&&tmp<a[j]){//tmp<a[j] but not tmp<=a[j],this make the sorting algorithm original index(stable)
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=tmp;
    }

}
