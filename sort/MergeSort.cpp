//
// Created by JackieChen on 16/10/13.
//

#include "MergeSort.h"
#include <iostream>

void MergeSort::merge(int *a, int p, int q, int r) {
    int left[q-p+1+1];
    int right[r-q+1];
    //Copy Thus O(n)
    for(int i=0;i<q-p+1;i++){
        left[i]=a[p+i];
    }
    for(int i=0;i<r-q;i++){
        right[i]=a[q+1+i];
    }

    left[q-p+1]=INT32_MAX;//Act as guard to minimize edge judgement
    right[r-q]=INT32_MAX;
    int ptr_l=0,ptr_r=0;
    for(int i=0;i<r-p+1;i++){
        if(left[ptr_l]<right[ptr_r]){
            a[p+i]=left[ptr_l++];
        } else{
            a[p+i]=right[ptr_r++];
        }

    }


}
void MergeSort::sort(int *a,int p,int r) {
    if(p<r){
        int mid=p/2+r/2;
        sort(a,p,mid);
        sort(a,mid+1,r);
        merge(a,p,mid,r);
    }

}
