//
// Created by JackieChen on 16/10/13.
//

#include "HeapSort.h"
void HeapSort::MAX_HEAPIFY(int *a, int i,int size) {
    int largest;
    int l=LEFT(i);
    int r=RIGHT(i);
    if(l<=size&&a[l]>a[i])
        largest=l;
    else
        largest=i;
    if(r<=size&&a[r]>a[largest])
        largest=r;
    if(largest!=i){
        a[i]^=a[largest];
        a[largest]^=a[i];
        a[i]^=a[largest];
        MAX_HEAPIFY(a,largest,size);
    }


}
void HeapSort::BUILD_MAX_HEAP(int *a, int size) {
    for(int i=size/2;i>=0;i--)
        MAX_HEAPIFY(a,i,size);
}
void HeapSort::sort(int *a, int length) {
    BUILD_MAX_HEAP(a,length);
    for(int i=length;i>0;i--){
        a[0]^=a[i];
        a[i]^=a[0];
        a[0]^=a[i];
        length--;
        MAX_HEAPIFY(a,0,length);
    }
}
